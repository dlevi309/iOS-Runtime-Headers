/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRIKVStore : NSObject {

	TRIDatabase* _db;

}
-(id)init;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)blobForKey:(id)arg1 usingTransaction:(id)arg2 ;
-(void)setBlob:(id)arg1 forKey:(id)arg2 usingTransaction:(id)arg3 ;
-(void)removeBlobForKey:(id)arg1 usingTransaction:(id)arg2 ;
@end

