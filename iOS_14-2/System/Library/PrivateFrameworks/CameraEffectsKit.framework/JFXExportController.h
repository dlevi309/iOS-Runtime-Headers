/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXExportDelegate;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXComposition, NSArray, NSString, UIImage, NSTimer;

@interface JFXExportController : NSObject {

	BOOL _cancel;
	unsigned long long _exportStartTime;
	JFXComposition* _composition;
	NSArray* _presets;
	NSString* _currentPreset;
	UIImage* _poster;
	id<JFXExportDelegate> _delegate;
	NSString* _exportPath;
	NSTimer* _progressTimer;
	unsigned long long _exportingIndexPresets;
	long long _status;

}

@property (assign) unsigned long long exportStartTime;                              //@synthesize exportStartTime=_exportStartTime - In the implementation block
@property (nonatomic,retain) JFXComposition * composition;                          //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NSArray * presets;                                     //@synthesize presets=_presets - In the implementation block
@property (nonatomic,retain) NSString * currentPreset;                              //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,retain) UIImage * poster;                                      //@synthesize poster=_poster - In the implementation block
@property (nonatomic,retain) id<JFXExportDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * exportPath;                                 //@synthesize exportPath=_exportPath - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                               //@synthesize progressTimer=_progressTimer - In the implementation block
@property (assign,nonatomic) unsigned long long exportingIndexPresets;              //@synthesize exportingIndexPresets=_exportingIndexPresets - In the implementation block
@property (assign,nonatomic) long long status;                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL cancel;                                           //@synthesize cancel=_cancel - In the implementation block
+(unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 size:(CGSize)arg4 ;
+(unsigned long long)dataRateForPreset:(id)arg1 size:(CGSize)arg2 ;
+(unsigned long long)videoDataRateForPreset:(id)arg1 size:(CGSize)arg2 ;
+(unsigned long long)audioDataRateForPreset:(id)arg1 ;
-(UIImage *)poster;
-(void)startProgressTimer;
-(float)progress;
-(NSArray *)presets;
-(id<JFXExportDelegate>)delegate;
-(void)stopProgressTimer;
-(JFXComposition *)composition;
-(void)setPoster:(UIImage *)arg1 ;
-(void)setDelegate:(id<JFXExportDelegate>)arg1 ;
-(NSString *)currentPreset;
-(void)setCurrentPreset:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(BOOL)cancel;
-(void)setCancel:(BOOL)arg1 ;
-(void)setComposition:(JFXComposition *)arg1 ;
-(long long)status;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)setExportStartTime:(unsigned long long)arg1 ;
-(id)initWithWithComposition:(id)arg1 presets:(id)arg2 toFile:(id)arg3 poster:(id)arg4 delegate:(id)arg5 ;
-(void)beginAsynchronousExport;
-(void)cancelExportWithStatus:(long long)arg1 ;
-(unsigned long long)exportStartTime;
-(unsigned long long)exportingIndexPresets;
-(void)setExportingIndexPresets:(unsigned long long)arg1 ;
-(void)nextPreset;
-(void)analyticsForSessionBegin;
-(void)updateProgressViewWithProgress:(float)arg1 reduced:(BOOL)arg2 ;
-(void)continueExportAfterDelay;
-(void)closeSessionWithStatus:(long long)arg1 ;
-(void)analyticsForSessionCompleteWithStatus:(long long)arg1 ;
-(void)informDelegateOfCompletion;
-(void)serviceProgressTimer:(id)arg1 ;
-(unsigned long long)exportDuration;
-(id)metadataToAdd;
-(void)setPresets:(NSArray *)arg1 ;
-(NSString *)exportPath;
-(void)setExportPath:(NSString *)arg1 ;
@end

