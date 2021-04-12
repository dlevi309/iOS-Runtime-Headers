/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFDialogPresenting;
@class NSDate;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject {

	long long _classification;
	NSDate* _dateUserLastDeclined;
	id<_SFDialogPresenting> _dialogPresenter;

}

@property (assign,nonatomic,__weak) id<_SFDialogPresenting> dialogPresenter;              //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
+(double)test_suspiciousClassificationExpirationDuration;
-(void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
-(void)_handleInput:(long long)arg1 ;
-(BOOL)policyAppliesToURL:(id)arg1 ;
-(void)handleNavigationToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userAcceptedCallPrompt;
-(void)userDeclinedCallPrompt;
-(id<_SFDialogPresenting>)dialogPresenter;
-(void)setDialogPresenter:(id<_SFDialogPresenting>)arg1 ;
@end

