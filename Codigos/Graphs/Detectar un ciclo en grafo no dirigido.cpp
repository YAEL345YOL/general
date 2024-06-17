vvll graph;
vll visited;

bool detectCycleUndirectedGraph(ll u,ll parent){
    visited[u] = 1;
    for(auto&v:graph[u])
        if((visited[v] && v!=parent) || (!visited[v] && detectCycleUndirectedGraph(v,u))) 
            return 1;
    return 0;
}
