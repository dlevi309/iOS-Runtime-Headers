/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUIWebModel.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext, UIViewController;

@interface AMSUIWebCameraReaderPageModel : AMSUIWebModel <AMSUIWebPageProvider> {

	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _bottomLinkLabel;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	long long _pageType;
	NSString* _primaryLabel;
	NSString* _secondaryLabel;
	id<AMSUIWebActionRunnable> _action;
	AMSUIWebClientContext* _context;
	UIViewController* _presentedViewController;

}

@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) NSString * bottomLinkLabel;                                     //@synthesize bottomLinkLabel=_bottomLinkLabel - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> bottomLinkAction;                    //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (assign,nonatomic) long long pageType;                                             //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSString * primaryLabel;                                        //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) NSString * secondaryLabel;                                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;                   //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
-(AMSUIWebClientContext *)context;
-(id<AMSUIWebActionRunnable>)action;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(UIViewController *)presentedViewController;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(NSString *)primaryLabel;
-(NSString *)secondaryLabel;
-(void)setPrimaryLabel:(NSString *)arg1 ;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(long long)pageType;
-(void)setPageType:(long long)arg1 ;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(NSString *)bottomLinkLabel;
-(void)setBottomLinkLabel:(NSString *)arg1 ;
@end

