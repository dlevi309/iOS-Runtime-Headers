/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol SiriPresentation <BSInvalidatable>
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,retain) id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate; 
@required
-(void)invalidate;
-(long long)identifier;
-(BOOL)isEnabled;
-(void)dismiss;
-(void)dismissWithOptions:(id)arg1;
-(id<SiriPresentationControllerDelegate>)siriPresentationControllerDelegate;
-(void)setSiriPresentationControllerDelegate:(id)arg1;

@end

