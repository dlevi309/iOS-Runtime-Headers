/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <UIKit/UISpringLoadedInteractionBehavior.h>

@protocol SBFSpringLoadedInteractionBehaviorDelegate;
@class NSString;

@interface SBFSpringLoadedInteractionBehavior : NSObject <UISpringLoadedInteractionBehavior> {

	id<SBFSpringLoadedInteractionBehaviorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBFSpringLoadedInteractionBehaviorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFSpringLoadedInteractionBehaviorDelegate>)delegate;
-(void)setDelegate:(id<SBFSpringLoadedInteractionBehaviorDelegate>)arg1 ;
-(BOOL)shouldAllowInteraction:(id)arg1 withContext:(id)arg2 ;
-(void)interactionDidFinish:(id)arg1 ;
@end

