/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)policyAppliesToURL:(id)arg1 ;
-(void)setDialogPresenter:(id<_SFDialogPresenting>)arg1 ;
-(id<_SFDialogPresenting>)dialogPresenter;
-(void)userAcceptedCallPrompt;
-(void)handleNavigationToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleInput:(long long)arg1 ;
-(void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
-(void)userDeclinedCallPrompt;
@end

