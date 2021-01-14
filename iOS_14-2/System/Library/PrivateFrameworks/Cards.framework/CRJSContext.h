/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <JavaScriptCore/JSContext.h>

@interface CRJSContext : JSContext
+(id)sharedContext;
-(id)initWithVirtualMachine:(id)arg1 ;
-(id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id*)arg4 ;
-(void)evaluateScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createCard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

