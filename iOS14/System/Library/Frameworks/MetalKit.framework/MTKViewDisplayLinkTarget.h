/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/


@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject {

	MTKView* _target;

}

@property (assign,nonatomic,__weak) MTKView * target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(MTKView *)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)draw;
-(MTKView *)target;
@end

