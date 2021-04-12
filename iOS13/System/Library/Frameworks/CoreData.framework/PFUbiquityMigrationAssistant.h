/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, PFUbiquityLocation, NSMutableDictionary, NSMutableArray;

@interface PFUbiquityMigrationAssistant : NSObject {

	NSString* _ubiquityName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSMutableDictionary* _baselineLocationsByVersionHash;
	NSMutableDictionary* _logLocationsByVersionHash;
	NSMutableArray* _receiptLocations;
	NSMutableArray* _orderedReceipts;
	NSString* _previousModelVersionHash;
	NSString* _currentModelVersionHash;

}

@property (nonatomic,readonly) NSString * previousModelVersionHash;              //@synthesize previousModelVersionHash=_previousModelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * currentModelVersionHash;               //@synthesize currentModelVersionHash=_currentModelVersionHash - In the implementation block
-(void)dealloc;
-(id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4 ;
-(id)transactionLogLocationsForModelVersionHash:(id)arg1 ;
-(id)transactionLogLocationsByModelVersionHash;
-(id)baselineLocationsByModelVersionHash;
-(id)latestBaselineLocationSkipModelVersionHash:(id)arg1 ;
-(void)_populateBaselineAndTransactionLogLocations;
-(id)receiptLocations;
-(BOOL)canUseReceipts;
-(id)orderedReceipts;
-(id)latestTransactionLogForModelVersionHash:(id)arg1 ;
-(BOOL)electPreviousModelVersionHashFromTransactionLogsError:(id*)arg1 ;
-(NSString *)previousModelVersionHash;
-(NSString *)currentModelVersionHash;
@end

