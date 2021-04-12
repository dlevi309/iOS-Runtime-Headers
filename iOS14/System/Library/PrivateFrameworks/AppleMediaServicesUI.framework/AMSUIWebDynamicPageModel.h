/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class NSString, AMSUIWebNavigationBarModel, ACAccount, NSDictionary, NSURL, AMSUIWebClientContext;

@interface AMSUIWebDynamicPageModel : NSObject <AMSUIWebPageProvider> {

	NSString* _backgroundColor;
	AMSUIWebNavigationBarModel* _navigationBar;
	ACAccount* _account;
	NSDictionary* _clientOptions;
	NSDictionary* _metricsOverlay;
	NSURL* _URL;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * clientOptions;                              //@synthesize clientOptions=_clientOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverlay;                             //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(CGSize)windowSize;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(AMSUIWebClientContext *)context;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)backgroundColor;
-(NSURL *)URL;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)createViewController;
-(NSDictionary *)clientOptions;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
@end

