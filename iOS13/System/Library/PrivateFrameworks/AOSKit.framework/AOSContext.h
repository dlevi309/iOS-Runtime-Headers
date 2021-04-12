/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSPortDelegate.h>

@class NSThread, NSString;

@interface AOSContext : NSObject <NSPortDelegate> {

	AOSAccountRef _account;
	AOSTransactionC* _transaction;
	/*function pointer*/void* _callback;
	NSThread* _callbackThread;
	id _info;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithAccount:(AOSAccountRef)arg1 andTransaction:(AOSTransactionC*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)info;
-(AOSAccountRef)account;
-(void)setAccount:(AOSAccountRef)arg1 ;
-(AOSTransactionC*)transaction;
-(void)setTransaction:(AOSTransactionC*)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)_callbackThread;
-(void)_performCallback;
-(BOOL)scheduleCallback;
@end

