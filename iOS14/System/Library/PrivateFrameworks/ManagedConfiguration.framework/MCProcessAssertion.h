/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface MCProcessAssertion : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)initWithReason:(id)arg1 ;
-(void)_createAssertion;
-(NSString *)reason;
-(void)_releaseAssertion;
-(void)dealloc;
@end

