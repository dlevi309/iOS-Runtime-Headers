/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface __NSSKGraph : NSObject {

	edge* _edges;
	vertex* _vertices;
	unsigned long long _numV;
	unsigned long long _numE;
	unsigned long long _currE;
	unsigned long long _dump;
	unsigned long long _l_end;

}
-(edge*)isAcyclic;
-(id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2 ;
-(unsigned long long)numOfEdges;
-(BOOL)isEmpty;
-(BOOL)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2 ;
-(void)dealloc;
@end

