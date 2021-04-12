/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class NSString, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel, NSDictionary;

@interface AMSUIWebFlowOptions : NSObject {

	BOOL _animated;
	BOOL _deferredPresentation;
	BOOL _initialLoad;
	BOOL _reuseExistingPage;
	NSString* _backgroundColor;
	AMSUIWebLoadingPageModel* _loadingPage;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSDictionary* _pageData;

}

@property (assign,nonatomic) BOOL animated;                                           //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL deferredPresentation;                               //@synthesize deferredPresentation=_deferredPresentation - In the implementation block
@property (assign,nonatomic) BOOL initialLoad;                                        //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL reuseExistingPage;                                  //@synthesize reuseExistingPage=_reuseExistingPage - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * loadingPage;                  //@synthesize loadingPage=_loadingPage - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                        //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                          //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) NSDictionary * pageData;                                 //@synthesize pageData=_pageData - In the implementation block
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(long long)modalPresentationStyle;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)backgroundColor;
-(void)setInitialLoad:(BOOL)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(NSDictionary *)pageData;
-(void)setPageData:(NSDictionary *)arg1 ;
-(void)setDeferredPresentation:(BOOL)arg1 ;
-(void)setReuseExistingPage:(BOOL)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(BOOL)deferredPresentation;
-(BOOL)reuseExistingPage;
-(BOOL)initialLoad;
@end

