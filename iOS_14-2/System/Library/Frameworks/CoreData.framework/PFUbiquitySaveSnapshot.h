/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)exportingPeerID;
-(id)storeSaveSnapshotForStoreName:(id)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSArray *)storeNames;
-(id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2 ;
-(id)storeSaveSnapshotForStore:(id)arg1 ;
-(NSString *)localPeerID;
-(id)description;
-(id)initWithTransactionLog:(id)arg1 ;
-(NSString *)modelVersionHash;
-(void)dealloc;
@end

