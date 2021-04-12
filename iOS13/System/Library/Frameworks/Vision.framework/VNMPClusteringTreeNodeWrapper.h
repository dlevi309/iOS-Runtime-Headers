/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface VNMPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(void)dealloc;
-(id)left;
-(void*)node;
-(id)descriptor;
-(void)setNode:(void*)arg1 ;
-(float)distance;
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(int)nodeId;
-(id)right;
-(float)avgDistance;
-(int)leafsCount;
-(id)getLeafNodes;
-(BOOL)freeNodeOnDealloc;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
@end

