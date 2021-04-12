/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enqueueOperation:(id)arg1 ;
-(void)cancelAllOperations;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)_removeOperation:(id)arg1 ;
-(void)dealloc;
@end

