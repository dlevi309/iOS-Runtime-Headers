/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@interface HROnboardingPage : NSObject {

	BOOL _lastPage;
	Class _viewControllerClass;

}

@property (assign,nonatomic) BOOL lastPage;                            //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass;              //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
-(Class)viewControllerClass;
-(BOOL)lastPage;
-(id)initWithViewControllerClass:(Class)arg1 ;
-(void)setLastPage:(BOOL)arg1 ;
@end

