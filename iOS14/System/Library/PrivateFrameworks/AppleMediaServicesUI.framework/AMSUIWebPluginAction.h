/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, NSDictionary, AMSUIWebClientContext;

@interface AMSUIWebPluginAction : NSObject <AMSUIWebActionRunnable> {

	NSString* _actionIdentifier;
	NSString* _bundleIdentifier;
	NSDictionary* _options;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                  //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                       //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleIdentifier;
-(NSDictionary *)options;
-(AMSUIWebClientContext *)context;
-(NSString *)actionIdentifier;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

