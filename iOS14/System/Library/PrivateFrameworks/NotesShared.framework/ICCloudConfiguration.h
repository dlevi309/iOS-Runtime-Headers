/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject {

	BOOL _shouldSyncWhenEnteringForeground;
	BOOL _shouldPerformTopHitSearch;
	ICCloudThrottlingPolicy* _throttlingPolicy;
	double _syncInterval;
	unsigned long long _maxInlineAssetSizeBytes;
	unsigned long long _maxAttachmentsPerNote;
	unsigned long long _maxSubAttachmentsPerAttachment;
	unsigned long long _resultsLimitPerSyncOperation;
	NSNumber* _maximumAttachmentSizeMB;
	NSString* _minimumClientVersion;
	NSTimer* _downloadTimer;

}

@property (nonatomic,retain) ICCloudThrottlingPolicy * throttlingPolicy;                     //@synthesize throttlingPolicy=_throttlingPolicy - In the implementation block
@property (assign,nonatomic) double syncInterval;                                            //@synthesize syncInterval=_syncInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldSyncWhenEnteringForeground;                          //@synthesize shouldSyncWhenEnteringForeground=_shouldSyncWhenEnteringForeground - In the implementation block
@property (assign,nonatomic) unsigned long long maxInlineAssetSizeBytes;                     //@synthesize maxInlineAssetSizeBytes=_maxInlineAssetSizeBytes - In the implementation block
@property (nonatomic,retain) NSNumber * maximumAttachmentSizeMB;                             //@synthesize maximumAttachmentSizeMB=_maximumAttachmentSizeMB - In the implementation block
@property (assign,nonatomic) unsigned long long maxAttachmentsPerNote;                       //@synthesize maxAttachmentsPerNote=_maxAttachmentsPerNote - In the implementation block
@property (assign,nonatomic) unsigned long long maxSubAttachmentsPerAttachment;              //@synthesize maxSubAttachmentsPerAttachment=_maxSubAttachmentsPerAttachment - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimitPerSyncOperation;                //@synthesize resultsLimitPerSyncOperation=_resultsLimitPerSyncOperation - In the implementation block
@property (nonatomic,retain) NSTimer * downloadTimer;                                        //@synthesize downloadTimer=_downloadTimer - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformTopHitSearch;                                 //@synthesize shouldPerformTopHitSearch=_shouldPerformTopHitSearch - In the implementation block
@property (nonatomic,copy) NSString * minimumClientVersion;                                  //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
+(id)sharedConfiguration;
+(id)cachedConfigurationURL;
+(void)setDefaultConfigurationURL:(id)arg1 ;
+(BOOL)isConfigurationValid:(id)arg1 ;
+(id)defaultConfigurationURL;
+(id)availableConfigurationURLs;
-(NSTimer *)downloadTimer;
-(void)setConfigurationFromDictionary:(id)arg1 ;
-(id)init;
-(void)setThrottlingPolicy:(ICCloudThrottlingPolicy *)arg1 ;
-(unsigned long long)maxInlineAssetSizeBytes;
-(void)downloadRemoteConfiguration:(id)arg1 ;
-(double)syncInterval;
-(void)setSyncInterval:(double)arg1 ;
-(void)setShouldPerformTopHitSearch:(BOOL)arg1 ;
-(void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldPerformTopHitSearch;
-(void)setMaxAttachmentsPerNote:(unsigned long long)arg1 ;
-(void)setDownloadTimer:(NSTimer *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMaximumAttachmentSizeMB:(NSNumber *)arg1 ;
-(void)loadLocalConfigurationFile;
-(void)setMaxInlineAssetSizeBytes:(unsigned long long)arg1 ;
-(void)setResultsLimitPerSyncOperation:(unsigned long long)arg1 ;
-(NSNumber *)maximumAttachmentSizeMB;
-(void)loadConfigurationFromURL:(id)arg1 ;
-(ICCloudThrottlingPolicy *)throttlingPolicy;
-(unsigned long long)resultsLimitPerSyncOperation;
-(void)setMaxSubAttachmentsPerAttachment:(unsigned long long)arg1 ;
-(void)setShouldSyncWhenEnteringForeground:(BOOL)arg1 ;
-(unsigned long long)maxAttachmentsPerNote;
-(BOOL)shouldSyncWhenEnteringForeground;
-(unsigned long long)maxSubAttachmentsPerAttachment;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(void)dealloc;
@end

