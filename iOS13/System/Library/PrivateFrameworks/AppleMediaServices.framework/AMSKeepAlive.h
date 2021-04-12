/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface AMSKeepAlive : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _logKey;
	NSString* _name;
	long long _style;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
+(void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(/*^block*/id)arg3 ;
+(id)keepAliveWithName:(id)arg1 style:(long long)arg2 ;
+(void)_accessAssertionCache:(/*^block*/id)arg1 ;
+(void)_handleAssertionExpiration;
+(id)keepAliveWithFormat:(id)arg1 ;
+(id)keepAliveWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(long long)style;
-(id)_cacheKey;
-(id)_assertionName;
-(id)initWithName:(id)arg1 style:(long long)arg2 ;
-(void)_takeOSTransaction;
-(void)_takeProcessAssertion;
-(void)_startLogTimer;
-(void)_removeProcessAssertion;
-(void)_removeOSTransaction;
@end

