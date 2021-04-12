/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol ExportDelegate;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JTComposition, NSArray, NSString, UIImage, NSTimer;

@interface JTExportController : NSObject {

	BOOL _usingExistingRenderFile;
	BOOL _cancel;
	JTComposition* _composition;
	NSArray* _presets;
	NSString* _currentPreset;
	UIImage* _poster;
	id<ExportDelegate> _delegate;
	NSString* _exportPath;
	NSTimer* _progressTimer;
	unsigned long long _exportingIndexPresets;
	long long _status;

}

@property (nonatomic,retain) JTComposition * composition;                           //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NSArray * presets;                                     //@synthesize presets=_presets - In the implementation block
@property (nonatomic,retain) NSString * currentPreset;                              //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,retain) UIImage * poster;                                      //@synthesize poster=_poster - In the implementation block
@property (nonatomic,retain) id<ExportDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * exportPath;                                 //@synthesize exportPath=_exportPath - In the implementation block
@property (assign,nonatomic) BOOL usingExistingRenderFile;                          //@synthesize usingExistingRenderFile=_usingExistingRenderFile - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                               //@synthesize progressTimer=_progressTimer - In the implementation block
@property (assign,nonatomic) unsigned long long exportingIndexPresets;              //@synthesize exportingIndexPresets=_exportingIndexPresets - In the implementation block
@property (assign,nonatomic) BOOL cancel;                                           //@synthesize cancel=_cancel - In the implementation block
@property (assign,nonatomic) long long status;                                      //@synthesize status=_status - In the implementation block
+(unsigned long long)dataRateForPreset:(id)arg1 size:(CGSize)arg2 ;
+(unsigned long long)videoDataRateForPreset:(id)arg1 size:(CGSize)arg2 ;
+(unsigned long long)audioDataRateForPreset:(id)arg1 ;
+(unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 size:(CGSize)arg4 ;
-(void)dealloc;
-(id<ExportDelegate>)delegate;
-(void)setDelegate:(id<ExportDelegate>)arg1 ;
-(BOOL)cancel;
-(float)progress;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setCancel:(BOOL)arg1 ;
-(JTComposition *)composition;
-(void)cancelExport;
-(UIImage *)poster;
-(void)setPoster:(UIImage *)arg1 ;
-(void)setCurrentPreset:(NSString *)arg1 ;
-(NSString *)currentPreset;
-(void)setComposition:(JTComposition *)arg1 ;
-(void)closeSession;
-(void)stopProgressTimer;
-(void)startProgressTimer;
-(NSArray *)presets;
-(NSTimer *)progressTimer;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(void)setPresets:(NSArray *)arg1 ;
-(void)setExportingIndexPresets:(unsigned long long)arg1 ;
-(void)setExportPath:(NSString *)arg1 ;
-(unsigned long long)exportingIndexPresets;
-(void)nextPreset;
-(id)hasExistingFile;
-(void)updateProgressViewWithProgress:(float)arg1 reduced:(BOOL)arg2 ;
-(void)continueExportAfterDelay;
-(void)informDelegateOfCompletion;
-(void)serviceProgressTimer:(id)arg1 ;
-(id)initWithWithComposition:(id)arg1 presets:(id)arg2 toFile:(id)arg3 poster:(id)arg4 delegate:(id)arg5 ;
-(void)beginAsynchronousExport;
-(void)noteSessionProgressed:(float)arg1 ;
-(id)metadataToAdd;
-(NSString *)exportPath;
-(BOOL)usingExistingRenderFile;
-(void)setUsingExistingRenderFile:(BOOL)arg1 ;
@end

