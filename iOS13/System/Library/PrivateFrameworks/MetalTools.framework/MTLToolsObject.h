/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


#import <MetalTools/MetalTools-Structs.h>
@class MTLToolsPointerArray, MTLToolsDevice;

@interface MTLToolsObject : NSObject {

	MTLToolsObject* _parent;
	MTLToolsPointerArray* _tracker;
	MTLToolsObject* _baseObject;
	MTLToolsDevice* _device;
	ILayerLockingPolicy* _lockingPolicy;

}

@property (assign,nonatomic) ILayerLockingPolicy* lockingPolicy;              //@synthesize lockingPolicy=_lockingPolicy - In the implementation block
@property (assign,nonatomic) MTLToolsPointerArray * tracker;                  //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,retain) id baseObject;                                   //@synthesize baseObject=_baseObject - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device; 
+(id)dispatchQueue;
+(void)visitObjects:(id)arg1 withVisitor:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)parent;
-(MTLToolsPointerArray *)tracker;
-(void)setTracker:(MTLToolsPointerArray *)arg1 ;
-(id<MTLDevice>)device;
-(id)baseObject;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)originalObject;
-(ILayerLockingPolicy*)lockingPolicy;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(ILayerLockingPolicy*)arg3 ;
-(void)setLockingPolicy:(ILayerLockingPolicy*)arg1 ;
-(id)baseObjectWithClass:(Class)arg1 ;
-(void)setOriginalObject:(id)arg1 ;
-(id)strongParent;
-(void)setBaseObject:(id)arg1 ;
@end

