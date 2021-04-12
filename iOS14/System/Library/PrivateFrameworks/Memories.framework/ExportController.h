/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol MovieControllerExportProtocol;
@class Project, NSArray, NSString, NSTimer, BEAlertController;

@interface ExportController : NSObject {

	Project* m_project;
	NSArray* m_presets;
	unsigned long long m_exportingIndexPresets;
	NSString* m_currentPreset;
	id m_delegate;
	id<MovieControllerExportProtocol> m_movieController;
	NSString* m_exportPath;
	BOOL m_exportToPhotos;
	NSTimer* m_progressTimer;
	BOOL m_inTestMode;
	BOOL m_usingExistingRenderFile;
	BEAlertController* m_testModeAutoExportCompletedAlert;
	NSArray* _exportedPaths;
	double _exportAspect;

}

@property (nonatomic,retain) Project * project; 
@property (nonatomic,retain) NSArray * presets; 
@property (nonatomic,retain) NSString * currentPreset; 
@property (assign,nonatomic,__weak) id<ExportDelegate> delegate; 
@property (nonatomic,retain) id<MovieControllerExportProtocol> movieController; 
@property (nonatomic,retain) NSString * exportPath; 
@property (nonatomic,retain) NSArray * exportedPaths;                                           //@synthesize exportedPaths=_exportedPaths - In the implementation block
@property (assign,nonatomic) BOOL exportToPhotos; 
@property (nonatomic,retain) NSTimer * progressTimer; 
@property (assign,nonatomic) unsigned long long exportingIndexPresets; 
@property (assign,nonatomic) double exportAspect;                                               //@synthesize exportAspect=_exportAspect - In the implementation block
@property (nonatomic,retain) BEAlertController * testModeAutoExportCompletedAlert; 
+(unsigned long long)audioDataRateForPreset:(id)arg1 ;
+(BOOL)inTestMode;
+(id)testModeProjectBundle;
+(unsigned long long)testModeRepeatCount;
+(unsigned long long)dataRateForPreset:(id)arg1 ;
+(unsigned long long)videoDataRateForPreset:(id)arg1 ;
+(unsigned long long)dataRateForiCloudHD;
+(unsigned long long)dataRateForiCloud4G;
+(BOOL)testModeCopyToCameraRoll;
+(BOOL)testModeNoDialogAtEnd;
+(void)exitTestMode;
+(Class)exportControllerClass;
+(id)testModeProjectPlaceholder;
+(id)testModeProject:(id)arg1 ;
+(unsigned long long)testModeType;
+(unsigned long long)testModeMaxFrameToProcess;
+(id)currentTitle:(unsigned long long)arg1 ;
+(unsigned long long)estimatedVideoFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 project:(id)arg4 ;
-(void)startProgressTimer;
-(float)progress;
-(NSArray *)presets;
-(id<ExportDelegate>)delegate;
-(void)stopProgressTimer;
-(void)cancelExport;
-(void)setDelegate:(id<ExportDelegate>)arg1 ;
-(NSString *)currentPreset;
-(void)setCurrentPreset:(NSString *)arg1 ;
-(id)thumbnailImage;
-(void)closeSession;
-(Project *)project;
-(void)dealloc;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)beginAsynchronousExport;
-(unsigned long long)exportingIndexPresets;
-(void)setExportingIndexPresets:(unsigned long long)arg1 ;
-(void)nextPreset;
-(void)updateProgressViewWithProgress:(float)arg1 reduced:(BOOL)arg2 ;
-(void)continueExportAfterDelay;
-(void)informDelegateOfCompletion;
-(void)serviceProgressTimer:(id)arg1 ;
-(id)metadataToAdd;
-(void)setPresets:(NSArray *)arg1 ;
-(NSString *)exportPath;
-(void)setExportPath:(NSString *)arg1 ;
-(void)setMovieController:(id<MovieControllerExportProtocol>)arg1 ;
-(id<MovieControllerExportProtocol>)movieController;
-(id)initWithWithProject:(id)arg1 presets:(id)arg2 exportToPhotos:(BOOL)arg3 delegate:(id)arg4 ;
-(NSArray *)exportedPaths;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(void)createMovieController;
-(void)setExportToPhotos:(BOOL)arg1 ;
-(void)releaseMovieController;
-(BOOL)exportToPhotos;
-(id)hasExistingFile;
-(void)setExportedPaths:(NSArray *)arg1 ;
-(void)writeVideoFileToSavedPhotoAlbum:(id)arg1 ;
-(void)displayError:(id)arg1 ;
-(void)displayExportedToPhotos;
-(void)displayDiskSpaceError;
-(void)displayAlertTitle:(id)arg1 message:(id)arg2 ;
-(void)setTestModeAutoExportCompletedAlert:(BEAlertController *)arg1 ;
-(BEAlertController *)testModeAutoExportCompletedAlert;
-(void)noteSessionProgressed:(float)arg1 ;
@end
