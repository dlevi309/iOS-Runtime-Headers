/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CAAnimationDelegate;
@class NSString;

@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate> {

	id<CAAnimationDelegate> _animationDelegate;
	SCD_Struct_UI31 _flags;

}

@property (nonatomic,__weak,readonly) id<CAAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakAnimationDelegate:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)initWithAnimationDelegate:(id)arg1 ;
-(id<CAAnimationDelegate>)animationDelegate;
@end

