/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction {

	NSString* _notificationName;

}

@property (nonatomic,copy) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(double)coalescingDelay;
-(void)setNotificationName:(NSString *)arg1 ;
-(NSString *)notificationName;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3 ;
@end

