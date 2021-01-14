/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation, WebScriptObject;

@interface SUScriptOperation : ISOperation {

	id _options;
	ISOperation* _wrappedOperation;
	WebScriptObject* _callbackFunction;

}
+(Class)postOperationClassForType:(id)arg1 ;
+(void)registerPostOperationClass:(Class)arg1 forType:(id)arg2 ;
-(void)run;
-(void)dealloc;
-(id)initWithPostType:(id)arg1 options:(id)arg2 ;
-(id)initWithOperation:(id)arg1 options:(id)arg2 ;
-(id)initWithOperation:(id)arg1 callback:(id)arg2 ;
-(void)setScriptOptions:(id)arg1 ;
-(void)_sendCompletionCallback;
-(id)_scriptOptions;
@end

