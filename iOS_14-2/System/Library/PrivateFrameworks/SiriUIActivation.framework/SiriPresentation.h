/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol SiriPresentation <BSInvalidatable>
@property (nonatomic,readonly) long long identifier; 
@property (assign,nonatomic,__weak) id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate; 
@required
-(void)invalidate;
-(BOOL)isEnabled;
-(long long)identifier;
-(void)dismiss;
-(void)setSiriPresentationControllerDelegate:(id)arg1;
-(void)dismissWithOptions:(id)arg1;
-(id<SiriPresentationControllerDelegate>)siriPresentationControllerDelegate;

@end

