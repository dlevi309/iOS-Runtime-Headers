/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class _PASLock;

@interface ATXTrialAssets : NSObject {

	_PASLock* _lock;

}
-(id)client;
-(id)init;
-(id)_treatmentId;
-(void)addUpdateHandlerWithBlock:(/*^block*/id)arg1 ;
-(id)dictionaryForClass:(Class)arg1 ;
-(id)_unarchiveResource:(id)arg1 ;
-(BOOL)clearStaleUnarchivedLevels;
-(id)filePathForResource:(id)arg1 ;
-(id)pathForLegacyResourcePath:(id)arg1 ;
-(id)dictionaryForResource:(id)arg1 ;
-(BOOL)_cleanModelDirectory;
-(id)_unarchivedResourcePath;
-(id)filePathForClass:(Class)arg1 ;
@end

