/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DAOfficeHoursContext : NSObject {

	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id _setCompletionBlock;

}

@property (nonatomic,readonly) BOOL isFetch; 
@property (nonatomic,copy) NSString * accountID;                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock;                           //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id setCompletionBlock;                             //@synthesize setCompletionBlock=_setCompletionBlock - In the implementation block
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)fetchCompletionBlock;
-(BOOL)isFetch;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)setCompletionBlock;
-(void)finishFetchWithOfficeHours:(id)arg1 error:(id)arg2 ;
-(void)finishSetWithError:(id)arg1 ;
-(void)abortWithError:(id)arg1 ;
-(void)setSetCompletionBlock:(id)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

