vvll graph;
vb visited(graph.size(),0);

void DFS(ll u){
    visited[u] = 1;
    cout<<u<<nl;
    for(auto&v:graph[u])
        if(!visited[v])
            DFS(v);
        
}