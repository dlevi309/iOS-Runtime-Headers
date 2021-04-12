/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUIWebModel.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext;

@interface AMSUIWebLoadingPageModel : AMSUIWebModel <AMSUIWebPageProvider> {

	BOOL _disableDelay;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _message;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableDelay;                                         //@synthesize disableDelay=_disableDelay - In the implementation block
@property (nonatomic,retain) NSString * message;                                        //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(BOOL)disableDelay;
-(void)setDisableDelay:(BOOL)arg1 ;
@end

