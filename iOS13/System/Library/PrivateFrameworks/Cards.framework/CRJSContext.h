/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <JavaScriptCore/JSContext.h>

@interface CRJSContext : JSContext
+(id)sharedContext;
-(id)initWithVirtualMachine:(id)arg1 ;
-(void)_createCard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id*)arg4 ;
-(void)evaluateScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

