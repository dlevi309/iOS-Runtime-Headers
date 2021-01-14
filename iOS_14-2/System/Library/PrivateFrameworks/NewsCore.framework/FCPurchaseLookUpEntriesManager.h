/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCKeyValueStore, NSMutableDictionary, NSDictionary;

@interface FCPurchaseLookUpEntriesManager : NSObject {

	FCKeyValueStore* _localStore;
	NSMutableDictionary* _entriesByTagID;

}

@property (nonatomic,retain) FCKeyValueStore * localStore;                       //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entriesByTagID;               //@synthesize entriesByTagID=_entriesByTagID - In the implementation block
@property (nonatomic,readonly) NSDictionary * lookupEntriesByTagID; 
-(void)removeAllEntries;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(NSDictionary *)lookupEntriesByTagID;
-(void)removeEntryForTagID:(id)arg1 ;
-(void)setEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(void)updateEntry:(id)arg1 ;
-(void)addEntryWithTagID:(id)arg1 purchaseID:(id)arg2 lastVerificationTime:(id)arg3 lastVerificationFailureTime:(id)arg4 purchaseType:(unsigned long long)arg5 purchaseValidationState:(unsigned long long)arg6 isNewsAppPurchase:(BOOL)arg7 dateOfExpiration:(id)arg8 hasShownRenewalNotice:(BOOL)arg9 ;
-(id)initWithLocalStore:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)removeEntry:(id)arg1 ;
-(id)_purchaseLookUpEntryIDForTagID:(id)arg1 ;
-(NSMutableDictionary *)entriesByTagID;
@end

