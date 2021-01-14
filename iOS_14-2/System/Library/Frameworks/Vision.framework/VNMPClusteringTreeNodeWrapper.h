/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface VNMPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(id)left;
-(id)right;
-(void*)node;
-(float)distance;
-(int)nodeId;
-(void)setNode:(void*)arg1 ;
-(float)avgDistance;
-(int)leafsCount;
-(id)descriptor;
-(id)getLeafNodes;
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(BOOL)freeNodeOnDealloc;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
-(void)dealloc;
@end

