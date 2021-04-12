/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/INIntentHandlerProvidingPrivate.h>

@class INExtensionContext, NSString;

@interface _INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProvidingPrivate> {

	INExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) INExtensionContext * _extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(INExtensionContext *)_extensionContext;
-(id)handlerForIntent:(id)arg1 ;
@end

