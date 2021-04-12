/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


@protocol WFIntentViewController <NSObject>
@property (assign,nonatomic,__weak) id<WFIntentViewControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL requiresConfirmation; 
@required
-(id<WFIntentViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)requiresConfirmation;
-(void)dismissPlatterWithCompletionHandler:(/*^block*/id)arg1;
-(void)presentPlatterFromSourceView:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateWithInteraction:(id)arg1;

@end

