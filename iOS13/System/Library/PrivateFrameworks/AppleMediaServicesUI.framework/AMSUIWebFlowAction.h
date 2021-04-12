/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@protocol AMSUIWebPageProvider;
@class NSString, AMSUIWebLoadingPageModel, NSDictionary, AMSUIWebNavigationBarModel, AMSUIWebModel, AMSUIWebClientContext;

@interface AMSUIWebFlowAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _deferredPresentation;
	id _actionData;
	long long _animationType;
	NSString* _backgroundColor;
	AMSUIWebLoadingPageModel* _loadingPage;
	NSDictionary* _metrics;
	AMSUIWebNavigationBarModel* _navigationBar;
	long long _presentationType;
	AMSUIWebModel*<AMSUIWebPageProvider> _replacementPage;
	long long _replacementType;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id actionData;                                                     //@synthesize actionData=_actionData - In the implementation block
@property (assign,nonatomic) long long animationType;                                           //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) BOOL deferredPresentation;                                         //@synthesize deferredPresentation=_deferredPresentation - In the implementation block
@property (nonatomic,retain) NSString * backgroundColor;                                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * loadingPage;                            //@synthesize loadingPage=_loadingPage - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                            //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBar;                        //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) long long presentationType;                                        //@synthesize presentationType=_presentationType - In the implementation block
@property (nonatomic,retain) AMSUIWebModel*<AMSUIWebPageProvider> replacementPage;              //@synthesize replacementPage=_replacementPage - In the implementation block
@property (assign,nonatomic) long long replacementType;                                         //@synthesize replacementType=_replacementType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(long long)animationType;
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(void)setAnimationType:(long long)arg1 ;
-(void)setActionData:(id)arg1 ;
-(id)actionData;
-(long long)presentationType;
-(void)setPresentationType:(long long)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(void)setDeferredPresentation:(BOOL)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(BOOL)deferredPresentation;
-(long long)replacementType;
-(AMSUIWebModel*<AMSUIWebPageProvider>)replacementPage;
-(void)setReplacementPage:(AMSUIWebModel*<AMSUIWebPageProvider>)arg1 ;
-(void)setReplacementType:(long long)arg1 ;
@end

