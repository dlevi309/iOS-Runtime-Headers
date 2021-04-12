/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLAWDMetricQueryDelegate.h>
#import <libobjc.A.dylib/PMLTrainingProtocol.h>

@class DESRecordStore, PMLAWDAvailableSessionsTracker, NSDictionary, PMLTrainingStore, NSString;

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol> {

	DESRecordStore* _fidesStore;
	PMLAWDAvailableSessionsTracker* _availableSessionsTracker;
	NSDictionary* _isMultiLabel;
	PMLTrainingStore* _store;

}

@property (nonatomic,readonly) PMLTrainingStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSingletonWithDirectory:(id)arg1 ;
-(void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6 ;
-(void)_sendStatsToFidesForModel:(id)arg1 sessionCount:(unsigned long long)arg2 positivesCount:(unsigned long long)arg3 negativesCount:(unsigned long long)arg4 support:(float)arg5 ;
-(void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(id)init;
-(PMLTrainingStore *)store;
-(BOOL)isMultiLabelModel:(id)arg1 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2 ;
-(id)_trainWithRecipe:(id)arg1 chunkData:(id)arg2 args:(id)arg3 error:(id*)arg4 ;
-(id)planReceivedWithRecipe:(id)arg1 attachments:(id)arg2 error:(id*)arg3 ;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5 ;
-(void)availableSessionsStatsReportedToAWD;
-(void)setSourceRecoverer:(/*^block*/id)arg1 ;
-(id)planReceivedWithPayload:(id)arg1 error:(id*)arg2 ;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)sendSessionStatsToFides;
-(void)deleteSessionsWithBundleID:(id)arg1 ;
-(void)_deleteAllSavedRecordsFromFidesStoreSync;
-(id)initWithStore:(id)arg1 fidesStore:(id)arg2 availableSessionsTracker:(id)arg3 ;
-(void)_sendStatsToFidesForMultiLabelModel:(id)arg1 sessionCount:(unsigned long long)arg2 labeledStats:(id)arg3 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2 ;
-(void)trimDbWithDeferralBlock:(/*^block*/id)arg1 ;
@end

