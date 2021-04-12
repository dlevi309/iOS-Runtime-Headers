/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction {

	BCCloudKitController* _cloudKitController;

}

@property (assign,nonatomic,__weak) BCCloudKitController * cloudKitController;              //@synthesize cloudKitController=_cloudKitController - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(BCCloudKitController *)cloudKitController;
-(id)initWithCloudKitController:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(double)transactionLifetimeTimout;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
@end

