/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class WLSourceDevice, WLSQLController, NSString;

@interface WLAppMigrator : NSObject <WLDataclassMigrating> {

	WLSourceDevice* _device;
	WLSQLController* _sqlController;

}

@property (nonatomic,retain) WLSourceDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) WLSQLController * sqlController;              //@synthesize sqlController=_sqlController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
+(id)dataType;
+(void)installMigratableApps:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_ssItemForiTunesStoreIdentifier:(id)arg1 ;
-(id)contentType;
-(WLSourceDevice *)device;
-(id)dataType;
-(void)setDevice:(WLSourceDevice *)arg1 ;
-(WLSQLController *)sqlController;
-(void)setSqlController:(WLSQLController *)arg1 ;
-(BOOL)accountBased;
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sqlController:(id)arg2 ;
-(void)_lookupStoreItemsMatchingExternalIDs:(id)arg1 attempt:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertMatchingApps:(id)arg1 ;
@end

