/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScheduler:(EDAssetDownloadScheduler *)arg1 ;
-(EDAssetDownloadScheduler *)scheduler;
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

