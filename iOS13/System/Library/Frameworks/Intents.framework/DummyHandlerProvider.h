/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(id)initWithHandler:(id)arg1 ;
-(id)handlerForIntent:(id)arg1 ;
@end

