/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface HKDaemonTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)transactionWithOwner:(id)arg1 ;
+(id)transactionWithOwner:(id)arg1 activityName:(id)arg2 ;
+(id)transactionWithName:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)invalidate;
-(id)_initWithName:(id)arg1 ;
-(void)dealloc;
@end

