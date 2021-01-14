/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@interface HROnboardingPage : NSObject {

	BOOL _lastPage;
	long long _sequencePage;
	Class _viewControllerClass;

}

@property (nonatomic,readonly) long long sequencePage;                 //@synthesize sequencePage=_sequencePage - In the implementation block
@property (assign,nonatomic) BOOL lastPage;                            //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass;              //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
-(BOOL)lastPage;
-(Class)viewControllerClass;
-(long long)sequencePage;
-(id)initWithViewControllerClass:(Class)arg1 sequencePage:(long long)arg2 ;
-(void)setLastPage:(BOOL)arg1 ;
@end

