/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@class MTLToolsDevice;

@interface MTLToolsObject : NSObject {

	MTLToolsObject* _parent;
	MTLToolsObject* _baseObject;
	MTLToolsDevice* _device;
	Ai _externalReferences;

}

@property (nonatomic,retain) id baseObject;              //@synthesize baseObject=_baseObject - In the implementation block
@property (readonly) id<MTLDevice> device; 
-(id)parent;
-(id<MTLDevice>)device;
-(id)description;
-(id)originalObject;
-(id)baseObject;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
-(void)setOriginalObject:(id)arg1 ;
-(id)strongParent;
-(void)setBaseObject:(id)arg1 ;
@end

