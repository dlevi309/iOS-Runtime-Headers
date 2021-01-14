/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol OS_os_transaction, OS_dispatch_source;
@class NSObject;

@interface ANTransactionInfo : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_source> _timer;
	double _expiration;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double expiration;                                     //@synthesize expiration=_expiration - In the implementation block
+(id)infoWithTransaction:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(double)expiration;
-(void)setExpiration:(double)arg1 ;
@end

