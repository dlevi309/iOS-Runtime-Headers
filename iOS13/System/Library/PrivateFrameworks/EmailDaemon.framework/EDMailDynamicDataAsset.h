/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSSet, EDAssetDownloadScheduler, NSString;

@interface EDMailDynamicDataAsset : NSObject <EFLoggable> {

	BOOL _shouldIgnoreUserAccountDomains;
	NSSet* _ignoredDomains;
	EDAssetDownloadScheduler* _scheduler;

}

@property (assign) BOOL shouldIgnoreUserAccountDomains;                         //@synthesize shouldIgnoreUserAccountDomains=_shouldIgnoreUserAccountDomains - In the implementation block
@property (retain) NSSet * ignoredDomains;                                      //@synthesize ignoredDomains=_ignoredDomains - In the implementation block
@property (nonatomic,retain) EDAssetDownloadScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)_ignoredDomainsFallback;
-(id)init;
-(EDAssetDownloadScheduler *)scheduler;
-(void)setScheduler:(EDAssetDownloadScheduler *)arg1 ;
-(BOOL)shouldIgnoreDomain:(id)arg1 ;
-(BOOL)shouldIgnoreUserAccountDomains;
-(void)_updateIgnoredDomains:(id)arg1 ;
-(void)_queryForAssetWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadAssetCatalogWithCompletion:(/*^block*/id)arg1 ;
-(NSSet *)ignoredDomains;
-(void)setIgnoredDomains:(NSSet *)arg1 ;
-(void)_updateStateFromAsset:(id)arg1 ;
-(void)setShouldIgnoreUserAccountDomains:(BOOL)arg1 ;
@end

