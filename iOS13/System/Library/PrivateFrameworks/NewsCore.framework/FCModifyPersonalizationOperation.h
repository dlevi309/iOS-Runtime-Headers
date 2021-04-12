/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, FCPersonalizationTreatment, CKRecord, NTPBPersonalizationProfile, NSError;

@interface FCModifyPersonalizationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	NSArray* _changeGroups;
	FCPersonalizationTreatment* _treatment;
	CKRecord* _remoteRecord;
	/*^block*/id _saveCompletionHandler;
	NTPBPersonalizationProfile* _savedProfile;
	CKRecord* _savedRecord;
	NSError* _resultError;

}

@property (nonatomic,retain) NTPBPersonalizationProfile * savedProfile;              //@synthesize savedProfile=_savedProfile - In the implementation block
@property (nonatomic,retain) CKRecord * savedRecord;                                 //@synthesize savedRecord=_savedRecord - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                  //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSArray * changeGroups;                                 //@synthesize changeGroups=_changeGroups - In the implementation block
@property (nonatomic,retain) FCPersonalizationTreatment * treatment;                 //@synthesize treatment=_treatment - In the implementation block
@property (nonatomic,retain) CKRecord * remoteRecord;                                //@synthesize remoteRecord=_remoteRecord - In the implementation block
@property (nonatomic,copy) id saveCompletionHandler;                                 //@synthesize saveCompletionHandler=_saveCompletionHandler - In the implementation block
+(id)personalizationProfileFromRecord:(id)arg1 ;
+(void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(BOOL)arg4 ;
+(void)pruneAggregates:(id)arg1 ;
+(void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(BOOL)arg4 ;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)performOperation;
-(unsigned long long)maxRetries;
-(FCPersonalizationTreatment *)treatment;
-(NSError *)resultError;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(void)resetForRetry;
-(NSArray *)changeGroups;
-(CKRecord *)remoteRecord;
-(void)setSavedProfile:(NTPBPersonalizationProfile *)arg1 ;
-(void)setSavedRecord:(CKRecord *)arg1 ;
-(void)setResultError:(NSError *)arg1 ;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(id)saveCompletionHandler;
-(NTPBPersonalizationProfile *)savedProfile;
-(CKRecord *)savedRecord;
-(void)setChangeGroups:(NSArray *)arg1 ;
-(void)setTreatment:(FCPersonalizationTreatment *)arg1 ;
-(void)setSaveCompletionHandler:(id)arg1 ;
@end

