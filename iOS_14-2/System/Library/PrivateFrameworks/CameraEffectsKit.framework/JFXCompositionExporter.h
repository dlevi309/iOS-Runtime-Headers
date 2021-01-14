/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/JFXExportDelegate.h>

@protocol JFXExportDelegate, JFXCompositionPlayableElementsDataSource;
@class JFXComposition, JFXReaderWriterExportController, NSDate, NSString;

@interface JFXCompositionExporter : NSObject <JFXExportDelegate> {

	id<JFXExportDelegate> _delegate;
	id<JFXCompositionPlayableElementsDataSource> _clipsDataSource;
	JFXComposition* _composition;
	JFXReaderWriterExportController* _exportController;
	NSDate* _exportStartTime;
	NSDate* _exportEndTime;

}

@property (nonatomic,retain) JFXComposition * composition;                                                //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) JFXReaderWriterExportController * exportController;                          //@synthesize exportController=_exportController - In the implementation block
@property (retain) NSDate * exportStartTime;                                                              //@synthesize exportStartTime=_exportStartTime - In the implementation block
@property (retain) NSDate * exportEndTime;                                                                //@synthesize exportEndTime=_exportEndTime - In the implementation block
@property (nonatomic,retain) id<JFXExportDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned parentCode; 
@property (nonatomic,readonly) id<JFXCompositionPlayableElementsDataSource> clipsDataSource;              //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)compositionClass;
-(void)tearDown;
-(id<JFXExportDelegate>)delegate;
-(JFXComposition *)composition;
-(void)setDelegate:(id<JFXExportDelegate>)arg1 ;
-(void)setComposition:(JFXComposition *)arg1 ;
-(void)dealloc;
-(id<JFXCompositionPlayableElementsDataSource>)clipsDataSource;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(id)initWithClipsDataSource:(id)arg1 ;
-(void)startWithPresets:(id)arg1 toFilePath:(id)arg2 poster:(id)arg3 ;
-(void)exportProgressedTo:(float)arg1 ;
-(void)exportAnalyticsForSessionBegin;
-(void)exportAnalyticsForSessionCompleteWithStatus:(long long)arg1 exportMachDuration:(unsigned long long)arg2 ;
-(void)didFinishExport:(long long)arg1 ;
-(void)setExportStartTime:(NSDate *)arg1 ;
-(void)setExportController:(JFXReaderWriterExportController *)arg1 ;
-(JFXReaderWriterExportController *)exportController;
-(NSDate *)exportEndTime;
-(NSDate *)exportStartTime;
-(void)setExportEndTime:(NSDate *)arg1 ;
-(unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 ;
-(void)cancelWithStatus:(long long)arg1 ;
-(double)timeElapsedDuringExport;
@end

