/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/


@protocol MSAuthenticationPresentationContext;
@class MSServiceAccount, MSSetupViewController;

@interface MSSetupSession : NSObject {

	id<MSAuthenticationPresentationContext> _presentationContext;
	MSServiceAccount* _account;
	unsigned long long _testFlags;
	MSSetupViewController* _viewController;

}

@property (nonatomic,readonly) unsigned long long testFlags;                                                  //@synthesize testFlags=_testFlags - In the implementation block
@property (nonatomic,retain,readonly) MSSetupViewController * viewController;                                 //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<MSAuthenticationPresentationContext> presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) MSServiceAccount * account;                                                    //@synthesize account=_account - In the implementation block
-(MSServiceAccount *)account;
-(id<MSAuthenticationPresentationContext>)presentationContext;
-(BOOL)startWithError:(id*)arg1 ;
-(MSSetupViewController *)viewController;
-(void)setPresentationContext:(id<MSAuthenticationPresentationContext>)arg1 ;
-(unsigned long long)testFlags;
-(id)initWithServiceAccount:(id)arg1 test:(unsigned long long)arg2 ;
-(id)initWithServiceAccount:(id)arg1 ;
@end

