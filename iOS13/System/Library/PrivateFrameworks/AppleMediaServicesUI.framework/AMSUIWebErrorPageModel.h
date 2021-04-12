/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUIWebModel.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext;

@interface AMSUIWebErrorPageModel : AMSUIWebModel <AMSUIWebPageProvider> {

	BOOL _errorMessageInternalOnly;
	AMSUIWebNavigationBarModel* _navigationBar;
	id<AMSUIWebActionRunnable> _action;
	/*^block*/id _actionBlock;
	NSString* _actionButtonTitle;
	NSString* _errorMessage;
	NSString* _errorTitle;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id actionBlock;                                              //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,retain) NSString * actionButtonTitle;                              //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                   //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) BOOL errorMessageInternalOnly;                             //@synthesize errorMessageInternalOnly=_errorMessageInternalOnly - In the implementation block
@property (nonatomic,retain) NSString * errorTitle;                                     //@synthesize errorTitle=_errorTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
-(AMSUIWebClientContext *)context;
-(id<AMSUIWebActionRunnable>)action;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)errorMessage;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)errorTitle;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(BOOL)errorMessageInternalOnly;
-(id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(void)setErrorMessageInternalOnly:(BOOL)arg1 ;
@end

