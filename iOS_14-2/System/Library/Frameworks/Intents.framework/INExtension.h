/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding> {

	INExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) INExtensionContext * _extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(INExtensionContext *)_extensionContext;
-(id)handlerForIntent:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end

