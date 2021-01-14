/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/ExportDelegate.h>

@protocol MiroMovieDelegate;
@class PHAsset, PHAssetCollection, MiroMemory, AVPlayerItem, MiroAutoEditor, NSString, MiroExportController, PregenerateHelper, UIViewController, NSSet;

@interface MiroMovie : NSObject <ExportDelegate> {

	BOOL _allowNonPHMemoryForUnitTesting;
	PHAsset* _keyAsset;
	PHAssetCollection* _collection;
	id<MiroMovieDelegate> _delegate;
	MiroMemory* _memory;
	AVPlayerItem* _playerItem;
	MiroAutoEditor* _autoEditor;
	NSString* _outputString;
	id _associatedPlayerViewController;
	MiroExportController* _exportController;
	PregenerateHelper* _helper;

}

@property (nonatomic,retain) MiroMemory * memory;                                    //@synthesize memory=_memory - In the implementation block
@property (retain) AVPlayerItem * playerItem;                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (retain) MiroAutoEditor * autoEditor;                                      //@synthesize autoEditor=_autoEditor - In the implementation block
@property (assign,nonatomic) BOOL allowNonPHMemoryForUnitTesting;                    //@synthesize allowNonPHMemoryForUnitTesting=_allowNonPHMemoryForUnitTesting - In the implementation block
@property (nonatomic,retain) NSString * outputString;                                //@synthesize outputString=_outputString - In the implementation block
@property (assign,nonatomic,__weak) id associatedPlayerViewController;               //@synthesize associatedPlayerViewController=_associatedPlayerViewController - In the implementation block
@property (nonatomic,retain) MiroExportController * exportController;                //@synthesize exportController=_exportController - In the implementation block
@property (nonatomic,retain) PregenerateHelper * helper;                             //@synthesize helper=_helper - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                     //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * collection;                         //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) UIViewController * playerViewController; 
@property (nonatomic,readonly) NSSet * defaultAssets; 
@property (assign,nonatomic,__weak) id<MiroMovieDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)runTest:(id)arg1 options:(id)arg2 usingPlayerViewController:(id)arg3 ;
-(long long)mood;
-(MiroMemory *)memory;
-(PregenerateHelper *)helper;
-(id)dataRepresentation;
-(void)setDuration:(float)arg1 ;
-(PHAssetCollection *)collection;
-(void)setMood:(long long)arg1 ;
-(PHAsset *)keyAsset;
-(PHAsset *)keyAsset;
-(id)init;
-(void)setCollection:(PHAssetCollection *)arg1 ;
-(id<MiroMovieDelegate>)delegate;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(double)maximumDuration;
-(id)songID;
-(id)subtitle;
-(void)setTitle:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(UIViewController *)playerViewController;
-(void)setDelegate:(id<MiroMovieDelegate>)arg1 ;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(id)production;
-(void)setHelper:(PregenerateHelper *)arg1 ;
-(void)addAsset:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(id)titleStyle;
-(void)setTitleStyle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setSongID:(id)arg1 ;
-(NSString *)outputString;
-(id)initWithAssetCollection:(id)arg1 ;
-(float)duration;
-(AVPlayerItem *)playerItem;
-(id)title;
-(NSSet *)defaultAssets;
-(BOOL)isCompelling;
-(void)dealloc;
-(id)diagnosticItemProvider;
-(void)prepareForPlayback;
-(void)pregenerateMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPregenerateMovie;
-(void)setExportController:(MiroExportController *)arg1 ;
-(MiroExportController *)exportController;
-(id)associatedPlayerViewController;
-(MiroAutoEditor *)autoEditor;
-(void)setAssociatedPlayerViewController:(id)arg1 ;
-(void)_teardownInternals;
-(void)setAutoEditor:(MiroAutoEditor *)arg1 ;
-(void)setOutputString:(NSString *)arg1 ;
-(void)didFinishExport;
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3 ;
-(void)cancelPrepareForPlayback;
-(id)createPHMemory;
-(BOOL)allowNonPHMemoryForUnitTesting;
-(void)setAllowNonPHMemoryForUnitTesting:(BOOL)arg1 ;
-(void)_generateProjectWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_exportProject:(id)arg1 presets:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)moodIDmap;
-(void)generateProjectWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)playerItemWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exportWithPresets:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)availableSongs;
-(id)availableTitleStyles;
-(void)removeClip:(id)arg1 ;
-(void)setRangeOfInterest:(SCD_Struct_Mi4)arg1 forClip:(id)arg2 ;
-(void)setVolume:(unsigned long long)arg1 forClip:(id)arg2 ;
-(id)exportSessionWithPresetName:(id)arg1 ;
-(id)_getMiroTapToRadarFilePath;
-(id)_tapToRadarDebug;
-(id)_tapToRadarMemory;
-(id)_tapToRadarBlueprint;
-(id)_tapToRadarPicklist;
-(id)_tapToRadarRanges;
-(id)_tapToRadarMediaanalysis_db;
-(id)_tapToRadarMediaanalysis_db_shm;
-(id)_tapToRadarMediaanalysis_db_wal;
-(void)tapToRadar;
-(void)_testPregenerateWithCompletion:(/*^block*/id)arg1 ;
@end

