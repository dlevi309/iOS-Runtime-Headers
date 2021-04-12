/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSDate, NSString, NSMutableDictionary, NSArray;

@interface PFUbiquitySaveSnapshot : NSObject {

	NSDate* _transactionDate;
	NSString* _modelVersionHash;
	NSString* _exportingPeerID;
	NSString* _localPeerID;
	NSMutableDictionary* _storeNameToStoreSaveSnapshots;

}

@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;               //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,readonly) NSArray * storeNames; 
@property (nonatomic,readonly) NSString * localPeerID;                   //@synthesize localPeerID=_localPeerID - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)modelVersionHash;
-(NSString *)localPeerID;
-(NSString *)exportingPeerID;
-(id)storeSaveSnapshotForStoreName:(id)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2 ;
-(NSArray *)storeNames;
-(id)storeSaveSnapshotForStore:(id)arg1 ;
-(id)initWithTransactionLog:(id)arg1 ;
@end

