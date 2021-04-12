/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AOSAccountRef)account;
-(void)setAccount:(AOSAccountRef)arg1 ;
-(void)finalize;
-(void)setTransaction:(AOSTransactionC*)arg1 ;
-(id)info;
-(id)init;
-(AOSTransactionC*)transaction;
-(void)setInfo:(id)arg1 ;
-(void)dealloc;
-(id)_callbackThread;
-(void)_performCallback;
-(BOOL)scheduleCallback;
@end

