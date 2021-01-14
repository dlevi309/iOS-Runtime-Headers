/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)deleteAllSavedRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveRecordWithData:(id)arg1 recordInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldMakeRecordWithFrequency:(unsigned long long)arg1 ;
-(BOOL)isPermitted;
-(BOOL)shouldMakeRecord;
-(void)deleteSavedRecordWithIdentfier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSavedRecordInfoWithCompletion:(/*^block*/id)arg1 ;
@end

