/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HMAccessory, NSMutableArray;

@interface HUAccessoryDiagnosticsItemManager : HFItemManager {

	HFStaticItem* _generateLogsButtonItem;
	HFStaticItem* _logCollectionFailedItem;
	HMAccessory* _sourceAccessory;
	NSMutableArray* _downloadedLogs;

}

@property (nonatomic,retain) NSMutableArray * downloadedLogs;                       //@synthesize downloadedLogs=_downloadedLogs - In the implementation block
@property (assign,nonatomic) BOOL collectionInProgress; 
@property (assign,nonatomic) BOOL collectionFailed; 
@property (nonatomic,readonly) HFStaticItem * generateLogsButtonItem;               //@synthesize generateLogsButtonItem=_generateLogsButtonItem - In the implementation block
@property (nonatomic,readonly) HFStaticItem * logCollectionFailedItem;              //@synthesize logCollectionFailedItem=_logCollectionFailedItem - In the implementation block
@property (nonatomic,readonly) HMAccessory * sourceAccessory;                       //@synthesize sourceAccessory=_sourceAccessory - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)availableLogs;
-(HMAccessory *)sourceAccessory;
-(BOOL)collectionInProgress;
-(BOOL)collectionFailed;
-(void)_loadDownloadedLogs;
-(HFStaticItem *)generateLogsButtonItem;
-(HFStaticItem *)logCollectionFailedItem;
-(void)didChangeNotification:(id)arg1 ;
-(void)setCollectionInProgress:(BOOL)arg1 ;
-(void)setCollectionFailed:(BOOL)arg1 ;
-(void)recordDownloadedLog:(id)arg1 ;
-(NSMutableArray *)downloadedLogs;
-(void)beginDiagnosticCollection;
-(void)setDownloadedLogs:(NSMutableArray *)arg1 ;
@end

