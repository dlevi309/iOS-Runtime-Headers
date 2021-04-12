/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


#import <StoreKit/StoreKit-Structs.h>
@class ASOOverlayTransitionContext;

@interface SKOverlayTransitionContext : NSObject {

	ASOOverlayTransitionContext* _backing;

}

@property (nonatomic,retain) ASOOverlayTransitionContext * backing;              //@synthesize backing=_backing - In the implementation block
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
-(CGRect)endFrame;
-(ASOOverlayTransitionContext *)backing;
-(CGRect)startFrame;
-(void)addAnimationBlock:(/*^block*/id)arg1 ;
-(id)initWithASOOverlayTransitionContext:(id)arg1 ;
-(void)setBacking:(ASOOverlayTransitionContext *)arg1 ;
@end

