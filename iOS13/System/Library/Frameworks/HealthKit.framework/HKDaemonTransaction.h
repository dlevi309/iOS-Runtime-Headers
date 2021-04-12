/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface HKDaemonTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)transactionWithName:(id)arg1 ;
+(id)transactionWithOwner:(id)arg1 ;
+(id)transactionWithOwner:(id)arg1 activityName:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)_initWithName:(id)arg1 ;
@end

