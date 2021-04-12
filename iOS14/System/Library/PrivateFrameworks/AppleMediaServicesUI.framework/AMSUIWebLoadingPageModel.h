/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class NSString, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider> {

	BOOL _disableDelay;
	NSString* _backgroundColor;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _message;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableDelay;                                         //@synthesize disableDelay=_disableDelay - In the implementation block
@property (nonatomic,retain) NSString * message;                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(CGSize)windowSize;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebClientContext *)context;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)backgroundColor;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(BOOL)disableDelay;
-(void)setDisableDelay:(BOOL)arg1 ;
@end

