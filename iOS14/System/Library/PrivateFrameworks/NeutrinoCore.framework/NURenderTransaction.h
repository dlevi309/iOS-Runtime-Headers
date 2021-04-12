/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_group;
@class NSMutableArray, NSObject, NSArray;

@interface NURenderTransaction : NSObject {

	long long _nestingLevel;
	NSMutableArray* _requests;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) NSArray * pendingRequests; 
+(void)commit;
+(id)currentTransaction;
+(void)begin;
+(void)group:(/*^block*/id)arg1 ;
+(void)setCurrentTransaction:(id)arg1 ;
+(void)_commit:(id)arg1 ;
+(id)ensureCurrentTransaction;
+(id)assertCurrentTransaction;
+(void)commitAndNotifyOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)withCurrentTransaction:(/*^block*/id)arg1 ;
-(void)flush;
-(BOOL)commit;
-(BOOL)begin;
-(NSArray *)pendingRequests;
-(id)init;
-(void)submitRequest:(id)arg1 ;
-(void)notifyCompletion:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)submitPendingRequests;
-(void)resetPendingRequests;
@end

