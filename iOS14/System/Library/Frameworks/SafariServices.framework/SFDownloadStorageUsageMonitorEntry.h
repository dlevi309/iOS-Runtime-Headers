/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFDownloadStorageUsageMonitorEntryDelegate;
@class NSUUID, NSProgress, NSString, NSData;

@interface SFDownloadStorageUsageMonitorEntry : NSObject {

	NSUUID* _identifier;
	NSProgress* _progress;
	id _progressSubscriber;
	NSString* _destinationPath;
	NSData* _progressData;
	long long _cachedUsage;
	id<SFDownloadStorageUsageMonitorEntryDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id progressSubscriber;                                                       //@synthesize progressSubscriber=_progressSubscriber - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                                                  //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,retain) NSData * progressData;                                                       //@synthesize progressData=_progressData - In the implementation block
@property (assign,nonatomic) long long cachedUsage;                                                       //@synthesize cachedUsage=_cachedUsage - In the implementation block
@property (assign,nonatomic,__weak) id<SFDownloadStorageUsageMonitorEntryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id<SFDownloadStorageUsageMonitorEntryDelegate>)delegate;
-(NSString *)destinationPath;
-(NSData *)progressData;
-(void)setDelegate:(id<SFDownloadStorageUsageMonitorEntryDelegate>)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)_didLoseProgress:(id)arg1 ;
-(void)_didGainProgress:(id)arg1 ;
-(void)_updateProgressSubscriptionWithData:(id)arg1 ;
-(void)setProgressData:(NSData *)arg1 ;
-(long long)cachedUsage;
-(void)setCachedUsage:(long long)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(id)progressSubscriber;
-(void)setProgressSubscriber:(id)arg1 ;
-(NSUUID *)identifier;
-(void)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

