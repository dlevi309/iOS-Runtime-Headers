/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction {

	BCCloudKitController* _cloudKitController;

}

@property (assign,nonatomic,__weak) BCCloudKitController * cloudKitController;              //@synthesize cloudKitController=_cloudKitController - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(double)coalescingDelay;
-(BCCloudKitController *)cloudKitController;
-(id)initWithCloudKitController:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)transactionLifetimeTimout;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
@end

