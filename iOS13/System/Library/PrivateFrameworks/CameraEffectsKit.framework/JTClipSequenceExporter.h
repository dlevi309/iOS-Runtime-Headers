/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol ExportDelegate, JTCompositionClipsDataSource;
@class JTComposition, JTReaderWriterExportController, NSDate;

@interface JTClipSequenceExporter : NSObject {

	id<ExportDelegate> _delegate;
	id<JTCompositionClipsDataSource> _clipsDataSource;
	JTComposition* _composition;
	JTReaderWriterExportController* _exportController;
	NSDate* _exportStartTime;
	NSDate* _exportEndTime;

}

@property (nonatomic,retain) id<JTCompositionClipsDataSource> clipsDataSource;               //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (nonatomic,retain) JTComposition * composition;                                    //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) JTReaderWriterExportController * exportController;              //@synthesize exportController=_exportController - In the implementation block
@property (retain) NSDate * exportStartTime;                                                 //@synthesize exportStartTime=_exportStartTime - In the implementation block
@property (retain) NSDate * exportEndTime;                                                   //@synthesize exportEndTime=_exportEndTime - In the implementation block
@property (nonatomic,retain) id<ExportDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ExportDelegate>)delegate;
-(void)setDelegate:(id<ExportDelegate>)arg1 ;
-(void)cancel;
-(void)tearDown;
-(JTComposition *)composition;
-(void)setComposition:(JTComposition *)arg1 ;
-(id<JTCompositionClipsDataSource>)clipsDataSource;
-(id)initWithClipsDataSource:(id)arg1 ;
-(void)setClipsDataSource:(id<JTCompositionClipsDataSource>)arg1 ;
-(void)startWithPresets:(id)arg1 toFilePath:(id)arg2 poster:(id)arg3 ;
-(void)didFinishExport:(long long)arg1 ;
-(void)exportProgressedTo:(float)arg1 ;
-(void)setExportStartTime:(NSDate *)arg1 ;
-(void)setExportController:(JTReaderWriterExportController *)arg1 ;
-(JTReaderWriterExportController *)exportController;
-(void)setExportEndTime:(NSDate *)arg1 ;
-(NSDate *)exportEndTime;
-(NSDate *)exportStartTime;
-(unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 ;
-(double)timeElapsedDuringExport;
@end

