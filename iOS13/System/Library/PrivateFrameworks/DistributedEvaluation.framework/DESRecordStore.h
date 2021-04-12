/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSString;

@interface DESRecordStore : NSObject {

	NSString* _bundleId;

}

@property (getter=isPermitted,nonatomic,readonly) BOOL permitted; 
@property (nonatomic,readonly) BOOL shouldMakeRecord; 
+(void)_getServiceProxyWithErrorHandler:(/*^block*/id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)shouldMakeRecordWithFrequency:(unsigned long long)arg1 ;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPermitted;
-(BOOL)shouldMakeRecord;
-(void)saveRecordWithData:(id)arg1 recordInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchSavedRecordInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSavedRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteSavedRecordWithIdentfier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

