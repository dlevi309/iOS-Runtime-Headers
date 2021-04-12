/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class NSString, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel, NSDictionary;

@interface AMSUIWebFlowOptions : NSObject {

	BOOL _animated;
	BOOL _deferredPresentation;
	BOOL _isReappear;
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
@property (assign,nonatomic) BOOL isReappear;                                         //@synthesize isReappear=_isReappear - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * loadingPage;                  //@synthesize loadingPage=_loadingPage - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                        //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                          //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) NSDictionary * pageData;                                 //@synthesize pageData=_pageData - In the implementation block
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(long long)modalPresentationStyle;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setPageData:(NSDictionary *)arg1 ;
-(void)setDeferredPresentation:(BOOL)arg1 ;
-(void)setIsReappear:(BOOL)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(BOOL)deferredPresentation;
-(NSDictionary *)pageData;
-(BOOL)isReappear;
@end

