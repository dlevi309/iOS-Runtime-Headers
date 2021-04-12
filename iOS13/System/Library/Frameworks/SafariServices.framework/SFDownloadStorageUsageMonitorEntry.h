/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SFDownloadStorageUsageMonitorEntryDelegate>)delegate;
-(void)setDelegate:(id<SFDownloadStorageUsageMonitorEntryDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)_didLoseProgress:(id)arg1 ;
-(void)_didGainProgress:(id)arg1 ;
-(void)_updateProgressSubscriptionWithData:(id)arg1 ;
-(void)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)progressSubscriber;
-(void)setProgressSubscriber:(id)arg1 ;
-(NSString *)destinationPath;
-(void)setDestinationPath:(NSString *)arg1 ;
-(NSData *)progressData;
-(void)setProgressData:(NSData *)arg1 ;
-(long long)cachedUsage;
-(void)setCachedUsage:(long long)arg1 ;
@end

