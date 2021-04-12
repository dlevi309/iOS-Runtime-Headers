/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSMutableArray, NSLock, NSString;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate> {

	NSMutableArray* _operations;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancelAllOperations;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(void)_removeOperation:(id)arg1 ;
@end

