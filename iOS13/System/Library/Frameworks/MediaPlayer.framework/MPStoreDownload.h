/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, SSDownload, SSPurchase, SSPurchaseResponse, NSString, NSError;

@interface MPStoreDownload : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _attributes;
	BOOL _canceled;
	NSMutableArray* _overridePhaseIdentifiers;
	SSDownload* _SSDownload;
	SSPurchase* _SSPurchase;
	SSPurchaseResponse* _SSPurchaseResponse;
	NSString* _downloadFilePath;
	long long _type;

}

@property (nonatomic,readonly) NSDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (nonatomic,readonly) long long downloadIdentifier; 
@property (nonatomic,readonly) long long downloadSizeLimit; 
@property (nonatomic,readonly) NSError * failureError; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isPurchasing,nonatomic,readonly) BOOL purchasing; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) unsigned long long libraryItemIdentifier; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSError * purchaseError; 
@property (nonatomic,readonly) long long reason; 
@property (nonatomic,readonly) NSDictionary * rentalInformation; 
@property (getter=isRestore,nonatomic,readonly) BOOL restore; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) long long type;                                        //@synthesize type=_type - In the implementation block
+(BOOL)_getEffectiveStoreDownloadAttributes:(id*)arg1 forPlaybackItemMetadata:(id)arg2 attributes:(id)arg3 ;
+(BOOL)canCreateStoreDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(id)storeDownloadForPlaybackItemMetadata:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(id)_SSPurchaseForType:(long long)arg1 attributes:(id)arg2 ;
+(id)storeDownloadForMediaItem:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2 ;
+(id)storeDownloadForStoreOffer:(id)arg1 type:(long long)arg2 attributes:(id)arg3 ;
+(id)storeDownloadWithDownloadIdentifier:(long long)arg1 ;
-(id)description;
-(long long)type;
-(long long)reason;
-(NSDictionary *)attributes;
-(BOOL)isFinished;
-(BOOL)isPaused;
-(long long)downloadIdentifier;
-(id)assetsForType:(id)arg1 ;
-(NSError *)failureError;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(double)percentComplete;
-(BOOL)_isCanceled;
-(BOOL)isCanceled;
-(id)_SSDownload;
-(id)_SSPurchase;
-(id)_SSPurchaseResponse;
-(id)initWithType:(long long)arg1 attributes:(id)arg2 ;
-(long long)downloadSizeLimit;
-(BOOL)isPurchasing;
-(BOOL)isRestore;
-(unsigned long long)libraryItemIdentifier;
-(NSString *)phaseIdentifier;
-(NSError *)purchaseError;
-(NSDictionary *)rentalInformation;
-(long long)storeItemIdentifier;
-(void)resetCachedRentalInformation;
-(void)_setCanceled:(BOOL)arg1 ;
-(void)_setSSDownload:(id)arg1 ;
-(void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2 ;
-(id)_getDownloadFilePath;
-(void)_setDownloadFilePath:(id)arg1 ;
-(void)_addOverridePhaseIdentifier:(id)arg1 ;
-(void)_removeOverridePhaseIdentifier:(id)arg1 ;
-(id)_currentOverridePhaseIdentifier;
-(id)_valueForDownloadProperty:(id)arg1 ;
@end

