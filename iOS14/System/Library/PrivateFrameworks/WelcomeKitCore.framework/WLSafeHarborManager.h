/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class WLMigrationDataCoordinator, WLMobileInstallation, NSFileManager;

@interface WLSafeHarborManager : NSObject {

	WLMigrationDataCoordinator* _dataCoordinator;
	WLMobileInstallation* _mobileInstallation;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)createSafeHarborDirectoryForBundleID:(id)arg1 returningError:(id*)arg2 ;
-(id)linkItemAtPath:(id)arg1 toRelativePath:(id)arg2 inAndroidContentPathOfSafeHarborDirectory:(id)arg3 ;
-(id)promoteDirectoryToSafeHarbor:(id)arg1 ;
-(id)initWithDataCoordinator:(id)arg1 mobileInstallation:(id)arg2 ;
-(id)deleteSafeHarborForBundleID:(id)arg1 ;
-(id)_safeHarborDirectoryForBundleID:(id)arg1 ;
-(id)_infoDictionaryForDirectory:(id)arg1 ;
-(id)_infoDataFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(id)_writeInfoData:(id)arg1 toDirectory:(id)arg2 ;
@end

