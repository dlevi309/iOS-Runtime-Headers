/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class WebScriptObject, NSLock, SUScriptObject;

@interface SUScriptFunction : NSObject {

	WebScriptObject* _function;
	NSLock* _lock;
	SUScriptObject* _thisObject;

}

@property (retain) WebScriptObject * scriptObject; 
@property (__weak) id thisObject; 
-(void)unlock;
-(id)init;
-(BOOL)callWithArguments:(id)arg1 ;
-(void)lock;
-(void)dealloc;
-(id)initWithScriptObject:(id)arg1 ;
-(void)setThisObject:(id)arg1 ;
-(WebScriptObject *)scriptObject;
-(void)setScriptObject:(WebScriptObject *)arg1 ;
-(BOOL)callWithArguments:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)callSynchronouslyWithArguments:(id)arg1 ;
-(id)_copyAdjustedArgumentsForArguments:(id)arg1 ;
-(id)thisObject;
@end

