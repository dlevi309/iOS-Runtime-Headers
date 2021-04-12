/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject {

	BOOL _shouldSyncWhenEnteringForeground;
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
@property (nonatomic,copy) NSString * minimumClientVersion;                                  //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
+(id)sharedConfiguration;
+(id)availableConfigurationURLs;
+(void)setDefaultConfigurationURL:(id)arg1 ;
+(id)cachedConfigurationURL;
+(BOOL)isConfigurationValid:(id)arg1 ;
+(id)defaultConfigurationURL;
-(id)init;
-(void)dealloc;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(unsigned long long)maxAttachmentsPerNote;
-(NSNumber *)maximumAttachmentSizeMB;
-(unsigned long long)maxInlineAssetSizeBytes;
-(void)loadLocalConfigurationFile;
-(void)downloadRemoteConfiguration:(id)arg1 ;
-(void)setDownloadTimer:(NSTimer *)arg1 ;
-(NSTimer *)downloadTimer;
-(void)setConfigurationFromDictionary:(id)arg1 ;
-(void)loadConfigurationFromURL:(id)arg1 ;
-(void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setThrottlingPolicy:(ICCloudThrottlingPolicy *)arg1 ;
-(void)setMaxInlineAssetSizeBytes:(unsigned long long)arg1 ;
-(void)setMaxAttachmentsPerNote:(unsigned long long)arg1 ;
-(void)setMaxSubAttachmentsPerAttachment:(unsigned long long)arg1 ;
-(void)setSyncInterval:(double)arg1 ;
-(void)setShouldSyncWhenEnteringForeground:(BOOL)arg1 ;
-(void)setMaximumAttachmentSizeMB:(NSNumber *)arg1 ;
-(void)setResultsLimitPerSyncOperation:(unsigned long long)arg1 ;
-(ICCloudThrottlingPolicy *)throttlingPolicy;
-(double)syncInterval;
-(BOOL)shouldSyncWhenEnteringForeground;
-(unsigned long long)maxSubAttachmentsPerAttachment;
-(unsigned long long)resultsLimitPerSyncOperation;
@end

