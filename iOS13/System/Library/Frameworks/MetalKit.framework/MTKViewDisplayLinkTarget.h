/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/


@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject {

	MTKView* _target;

}

@property (assign,nonatomic,__weak) MTKView * target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(MTKView *)arg1 ;
-(MTKView *)target;
-(id)initWithTarget:(id)arg1 ;
-(void)draw;
@end
