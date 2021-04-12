/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INIntentHandlerProvidingPrivate.h>

@class NSString;

@interface DummyHandlerProvider : NSObject <INIntentHandlerProvidingPrivate> {

	id _handler;

}

@property (nonatomic,readonly) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handlerForIntent:(id)arg1 ;
-(id)initWithHandler:(id)arg1 ;
-(id)handler;
@end

