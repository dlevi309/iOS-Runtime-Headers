/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)keepAliveWithName:(id)arg1 ;
+(void)_handleAssertionExpiration;
+(id)keepAliveWithName:(id)arg1 style:(long long)arg2 ;
+(id)keepAliveWithFormat:(id)arg1 ;
+(void)_accessAssertionCache:(/*^block*/id)arg1 ;
-(void)_startLogTimer;
-(void)_takeProcessAssertion;
-(void)_removeProcessAssertion;
-(void)_removeOSTransaction;
-(NSString *)name;
-(id)_assertionName;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
-(void)_takeOSTransaction;
-(long long)style;
-(id)initWithName:(id)arg1 style:(long long)arg2 ;
-(id)_cacheKey;
-(void)dealloc;
@end

