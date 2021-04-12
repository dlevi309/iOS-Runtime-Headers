/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class VEKBlueprint, NSSet, NSString, MiroMemory, AVPlayerItem, MiroAutoEditor, VEKProgressWatcher, VEKProductionExport, PHAsset;

@interface VEKProduction_MiroMemory_Bridge : NSObject {

	double _requestedDuration;
	VEKBlueprint* _blueprint;
	NSSet* _suggestions;
	NSString* _songID;
	MiroMemory* _memory;
	AVPlayerItem* _playerItem;
	MiroAutoEditor* _autoEditor;
	VEKProgressWatcher* _watcherProperty;
	VEKProductionExport* _productionExport;
	unsigned long long _nonLocalPickedAssetCount;

}

@property (nonatomic,retain) MiroMemory * memory;                                      //@synthesize memory=_memory - In the implementation block
@property (retain) AVPlayerItem * playerItem;                                          //@synthesize playerItem=_playerItem - In the implementation block
@property (retain) MiroAutoEditor * autoEditor;                                        //@synthesize autoEditor=_autoEditor - In the implementation block
@property (retain) VEKProgressWatcher * watcherProperty;                               //@synthesize watcherProperty=_watcherProperty - In the implementation block
@property (nonatomic,retain) VEKProductionExport * productionExport;                   //@synthesize productionExport=_productionExport - In the implementation block
@property (assign,nonatomic) unsigned long long nonLocalPickedAssetCount;              //@synthesize nonLocalPickedAssetCount=_nonLocalPickedAssetCount - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset; 
@property (assign,nonatomic) double requestedDuration;                                 //@synthesize requestedDuration=_requestedDuration - In the implementation block
@property (nonatomic,retain) VEKBlueprint * blueprint;                                 //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSSet * suggestions;                                      //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * songID;                                        //@synthesize songID=_songID - In the implementation block
+(void)initialize;
-(MiroMemory *)memory;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(id)dataRepresentation;
-(VEKBlueprint *)blueprint;
-(PHAsset *)keyAsset;
-(double)maxDuration;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(double)maximumDuration;
-(NSString *)songID;
-(BOOL)isPending;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)setBlueprint:(VEKBlueprint *)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSongID:(NSString *)arg1 ;
-(id)initWithAssetCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVPlayerItem *)playerItem;
-(NSString *)title;
-(double)requestedDuration;
-(MiroAutoEditor *)autoEditor;
-(void)setAutoEditor:(MiroAutoEditor *)arg1 ;
-(id)moodIDmap;
-(void)removeClip:(id)arg1 ;
-(void)setRangeOfInterest:(SCD_Struct_PM9)arg1 forClip:(id)arg2 ;
-(void)setVolume:(long long)arg1 forClip:(id)arg2 ;
-(long long)pickedItemCount;
-(void)setRequestedDuration:(double)arg1 ;
-(long long)moodForMoodID:(id)arg1 ;
-(id)moodIDForMood:(long long)arg1 ;
-(VEKProgressWatcher *)watcherProperty;
-(void)setWatcherProperty:(VEKProgressWatcher *)arg1 ;
-(void)setProductionExport:(VEKProductionExport *)arg1 ;
-(VEKProductionExport *)productionExport;
-(id)requestedMood;
-(id)memoryViewedDate;
-(void)_generateProjectWithNaturalSize:(CGSize)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateBlueprintOnMemory;
-(void)updateSuggestionsOnMemory;
-(void)generateProjectWithNaturalSize:(CGSize)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fudgedDurationInfo;
-(unsigned long long)nonLocalPickedAssetCount;
-(void)setNonLocalPickedAssetCount:(unsigned long long)arg1 ;
@end

