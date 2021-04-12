/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(BOOL)callWithArguments:(id)arg1 ;
-(id)initWithScriptObject:(id)arg1 ;
-(void)setThisObject:(id)arg1 ;
-(WebScriptObject *)scriptObject;
-(void)setScriptObject:(WebScriptObject *)arg1 ;
-(BOOL)callWithArguments:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)callSynchronouslyWithArguments:(id)arg1 ;
-(id)_copyAdjustedArgumentsForArguments:(id)arg1 ;
-(id)thisObject;
@end

