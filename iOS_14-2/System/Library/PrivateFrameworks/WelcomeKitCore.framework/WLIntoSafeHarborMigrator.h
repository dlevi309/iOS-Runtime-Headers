/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class NSString, WLSafeHarborManager, WLSourceDevice, WLSQLController, WLSafeHarborDirectory;

@interface WLIntoSafeHarborMigrator : NSObject <WLDataclassMigrating> {

	NSString* _bundleID;
	NSString* _contentType;
	NSString* _dataType;
	WLSafeHarborManager* _safeHarborManager;
	WLSourceDevice* _sourceDevice;
	WLSQLController* _sqlController;
	WLSafeHarborDirectory* _safeHarborDirectory;

}

@property (nonatomic,readonly) WLSourceDevice * sourceDevice;              //@synthesize sourceDevice=_sourceDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataType;
-(WLSourceDevice *)sourceDevice;
-(id)contentType;
-(BOOL)canMigrate;
-(BOOL)accountBased;
-(BOOL)confirmItemSizeWithSourceBeforeDownloading;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)importWillBegin;
-(id)importDidEnd;
-(id)safeHarborBundleID;
-(id)initWithBundleID:(id)arg1 contentType:(id)arg2 dataType:(id)arg3 safeHarborManager:(id)arg4 sourceDevice:(id)arg5 sqlController:(id)arg6 ;
@end

