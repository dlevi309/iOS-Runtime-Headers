/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSAppInstalling.h>

@protocol CPSAppInfoFetching;
@class CPSAppBundleInstaller, FPArchiveService, NSString;

@interface CPSAppInstaller : NSObject <CPSAppInstalling> {

	CPSAppBundleInstaller* _appBundleInstaller;
	FPArchiveService* _archiveService;
	id<CPSAppInfoFetching> _appInfoFetcher;

}

@property (nonatomic,readonly) id<CPSAppInfoFetching> appInfoFetcher;              //@synthesize appInfoFetcher=_appInfoFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)stopStallingCurrentInstallation;
-(void)installDownloadedAppWithBundleID:(id)arg1 localFilePath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAppInfoFetcher:(id)arg1 ;
-(id<CPSAppInfoFetching>)appInfoFetcher;
@end

