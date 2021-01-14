/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVBehaviorInternal.h>
#import <AVKit/AVBehavior.h>

@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior> {

	AVNewsWidgetPlayerBehaviorContext* _behaviorContext;

}

@property (assign,nonatomic,__weak) AVNewsWidgetPlayerBehaviorContext * behaviorContext;              //@synthesize behaviorContext=_behaviorContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)behaviorContextClass;
-(id)init;
-(void)willMoveToContext:(id)arg1 ;
-(AVNewsWidgetPlayerBehaviorContext *)behaviorContext;
-(void)setBehaviorContext:(AVNewsWidgetPlayerBehaviorContext *)arg1 ;
-(void)didMoveToContext:(id)arg1 ;
-(void)willRemoveFromContext:(id)arg1 ;
-(void)didRemoveFromContext:(id)arg1 ;
-(id)playerForContentTransitionType:(long long)arg1 ;
-(void)willBeginContentTransition;
-(void)didUpdateContentTransitionProgress:(double)arg1 ;
-(void)willCompleteContentTransition;
-(void)didCompleteContentTransition;
-(void)willCancelContentTransition;
-(void)didCancelContentTransition;
-(void)dealloc;
@end

