/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class NSString, AMSUIWebNavigationBarModel, AMSUIWebClientContext, UIViewController;

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider> {

	NSString* _backgroundColor;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _bottomLinkLabel;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	long long _pageType;
	NSString* _primaryLabel;
	NSString* _secondaryLabel;
	id<AMSUIWebActionRunnable> _action;
	AMSUIWebClientContext* _context;
	UIViewController* _presentedViewController;
	CGSize _windowSize;

}

@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) NSString * bottomLinkLabel;                                     //@synthesize bottomLinkLabel=_bottomLinkLabel - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> bottomLinkAction;                    //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (assign,nonatomic) long long pageType;                                             //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSString * primaryLabel;                                        //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) NSString * secondaryLabel;                                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;                   //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                            //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)windowSize;
-(void)setPrimaryLabel:(NSString *)arg1 ;
-(long long)pageType;
-(id<AMSUIWebActionRunnable>)action;
-(AMSUIWebClientContext *)context;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setPageType:(long long)arg1 ;
-(NSString *)backgroundColor;
-(NSString *)primaryLabel;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(NSString *)secondaryLabel;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(UIViewController *)presentedViewController;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(NSString *)bottomLinkLabel;
-(void)setBottomLinkLabel:(NSString *)arg1 ;
@end

