/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class VEKBlueprint, NSSet, NSString, MiroMemory, AVPlayerItem, MiroAutoEditor, VEKProgressWatcher, VEKExportController, PHAsset;

@interface VEKProduction_MiroMemory_Bridge : NSObject {

	VEKBlueprint* _blueprint;
	NSSet* _suggestions;
	NSString* _songID;
	MiroMemory* _memory;
	AVPlayerItem* _playerItem;
	MiroAutoEditor* _autoEditor;
	VEKProgressWatcher* _watcherProperty;
	VEKExportController* _exportController;
	unsigned long long _nonLocalPickedAssetCount;

}

@property (nonatomic,retain) MiroMemory * memory;                                      //@synthesize memory=_memory - In the implementation block
@property (retain) AVPlayerItem * playerItem;                                          //@synthesize playerItem=_playerItem - In the implementation block
@property (retain) MiroAutoEditor * autoEditor;                                        //@synthesize autoEditor=_autoEditor - In the implementation block
@property (retain) VEKProgressWatcher * watcherProperty;                               //@synthesize watcherProperty=_watcherProperty - In the implementation block
@property (nonatomic,retain) VEKExportController * exportController;                   //@synthesize exportController=_exportController - In the implementation block
@property (assign,nonatomic) unsigned long long nonLocalPickedAssetCount;              //@synthesize nonLocalPickedAssetCount=_nonLocalPickedAssetCount - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset; 
@property (assign,nonatomic) double requestedDuration; 
@property (nonatomic,retain) VEKBlueprint * blueprint;                                 //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSSet * suggestions;                                      //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * songID;                                        //@synthesize songID=_songID - In the implementation block
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dataRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(MiroMemory *)memory;
-(NSString *)subtitle;
-(BOOL)isPending;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)maximumDuration;
-(AVPlayerItem *)playerItem;
-(double)maxDuration;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)addAsset:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(void)setSongID:(NSString *)arg1 ;
-(NSString *)songID;
-(void)setBlueprint:(VEKBlueprint *)arg1 ;
-(VEKBlueprint *)blueprint;
-(void)setExportController:(VEKExportController *)arg1 ;
-(VEKExportController *)exportController;
-(double)requestedDuration;
-(MiroAutoEditor *)autoEditor;
-(void)setAutoEditor:(MiroAutoEditor *)arg1 ;
-(void)didFinishExport;
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3 ;
-(void)_generateProjectWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_exportProject:(id)arg1 presets:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)moodIDmap;
-(void)generateProjectWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)playerItemWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exportWithPresets:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeClip:(id)arg1 ;
-(void)setRangeOfInterest:(SCD_Struct_PM6)arg1 forClip:(id)arg2 ;
-(void)setVolume:(long long)arg1 forClip:(id)arg2 ;
-(void)setRequestedDuration:(double)arg1 ;
-(long long)pickedItemCount;
-(id)requestedMood;
-(id)memoryViewedDate;
-(long long)moodForMoodID:(id)arg1 ;
-(id)moodIDForMood:(long long)arg1 ;
-(VEKProgressWatcher *)watcherProperty;
-(void)setWatcherProperty:(VEKProgressWatcher *)arg1 ;
-(void)updateBlueprintOnMemory;
-(void)updateSuggestionsOnMemory;
-(void)setupDownloadHandler;
-(id)fudgedDurationInfo;
-(id)fudgedDownloadInfo;
-(void)setNonLocalPickedAssetCount:(unsigned long long)arg1 ;
-(void)updateNonLocalPickedAssetCount;
-(unsigned long long)nonLocalPickedAssetCount;
@end

