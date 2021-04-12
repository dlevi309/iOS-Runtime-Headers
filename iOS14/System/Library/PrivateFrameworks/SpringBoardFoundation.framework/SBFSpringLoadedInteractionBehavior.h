/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldAllowInteraction:(id)arg1 withContext:(id)arg2 ;
-(void)setDelegate:(id<SBFSpringLoadedInteractionBehaviorDelegate>)arg1 ;
-(void)interactionDidFinish:(id)arg1 ;
@end

