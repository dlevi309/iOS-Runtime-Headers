/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction {

	NSString* _notificationName;

}

@property (nonatomic,copy) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3 ;
@end

