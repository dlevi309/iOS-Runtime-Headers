/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLAWDMetricQueryDelegate.h>
#import <libobjc.A.dylib/PMLTrainingProtocol.h>

@class DESRecordStore, PMLAWDAvailableSessionsTracker, NSSet, PMLTrainingStore, NSString;

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol> {

	DESRecordStore* _fidesStore;
	PMLAWDAvailableSessionsTracker* _availableSessionsTracker;
	NSSet* _multiLabelModels;
	PMLTrainingStore* _store;

}

@property (readonly) PMLTrainingStore * store;                      //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSingletonWithDirectory:(id)arg1 ;
-(id)init;
-(PMLTrainingStore *)store;
-(void)deleteSessionsWithBundleID:(id)arg1 ;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(id)planReceivedWithPayload:(id)arg1 error:(id*)arg2 ;
-(void)setSourceRecoverer:(/*^block*/id)arg1 ;
-(void)trimDb;
-(void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2 ;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2 ;
-(void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5 ;
-(void)enumerateAvailableSessionsStatsUsingBlock:(/*^block*/id)arg1 ;
-(void)availableSessionsStatsReportedToAWD;
-(id)initWithStore:(id)arg1 fidesStore:(id)arg2 availableSessionsTracker:(id)arg3 ;
-(BOOL)isMultiLabelModel:(id)arg1 ;
-(void)sendSessionStatsToFides;
-(void)_sendStatsToFidesForModel:(id)arg1 sessionCount:(unsigned long long)arg2 positivesCount:(unsigned long long)arg3 support:(float)arg4 ;
-(void)_sendStatsToFidesForMultiLabelModel:(id)arg1 sessionCount:(unsigned long long)arg2 labeledStats:(id)arg3 ;
-(void)_deleteAllSavedRecordsFromFidesStoreSync;
@end

