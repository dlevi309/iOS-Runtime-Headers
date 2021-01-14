/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStickerBackend.h>

@protocol AVTStickerBackendDelegate, OS_dispatch_queue, AVTUILogger;
@class NSObject, NSUserDefaults, NSURL, NSMutableArray, NSString;

@interface AVTStickerUserDefaultsBackend : NSObject <AVTStickerBackend> {

	id<AVTStickerBackendDelegate> _stickerBackendDelegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<AVTUILogger> _logger;
	NSUserDefaults* _userDefaults;
	NSURL* _cacheLocation;
	NSMutableArray* _stickers;
	unsigned long long _frequencyCounter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                                          //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) NSURL * cacheLocation;                                                  //@synthesize cacheLocation=_cacheLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * stickers;                                                //@synthesize stickers=_stickers - In the implementation block
@property (assign,nonatomic) unsigned long long frequencyCounter;                                      //@synthesize frequencyCounter=_frequencyCounter - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerBackendDelegate> stickerBackendDelegate;              //@synthesize stickerBackendDelegate=_stickerBackendDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)getStickersFromUserDefaults;
-(id)fetchAllStickers;
-(id)fetchMostRecentStickersWithLimit:(unsigned long long)arg1 ;
-(id)fetchStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
-(void)updateStickerAtIndex:(unsigned long long)arg1 ;
-(void)addStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
-(void)saveStickersToUserDefaults;
-(id)stickersIndexesMatchingAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
-(NSURL *)cacheLocation;
-(unsigned long long)frequencyCounter;
-(void)setFrequencyCounter:(unsigned long long)arg1 ;
-(id)nextFrequencyCount;
-(id)addNextFrequencyCountToFrequencySum:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 environment:(id)arg2 userDefaults:(id)arg3 ;
-(void)_recentStickersChangedExternally;
-(void)setStickers:(NSMutableArray *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id<AVTUILogger>)logger;
-(NSMutableArray *)stickers;
-(id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<AVTStickerBackendDelegate>)stickerBackendDelegate;
-(void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setStickerBackendDelegate:(id<AVTStickerBackendDelegate>)arg1 ;
-(void)dealloc;
@end

