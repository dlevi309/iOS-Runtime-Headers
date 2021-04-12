/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {

	CAWindowServerDisplayImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) CGRect bounds; 
@property (assign) double scale; 
@property (readonly) NSString * name; 
@property (readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) NSString * uniqueId; 
@property (readonly) unsigned rendererFlags; 
@property (readonly) NSSet * clones; 
@property (readonly) CAWindowServerDisplay * cloneMaster; 
@property (getter=isBlanked) BOOL blanked; 
@property (getter=isFlipBookEnabled) BOOL flipBookEnabled; 
@property (copy) NSString * orientation; 
@property (assign) double overscanAmount; 
@property (assign) CGSize overscanAmounts; 
@property (assign) BOOL invertsColors; 
@property (assign) BOOL allowsExtendedDynamicRange; 
@property (getter=isGrayscale) BOOL grayscale; 
@property (assign) float contrast; 
@property (assign) float maximumBrightness; 
@property (readonly) float maximumLuminance; 
@property (assign) float nits; 
@property (assign) float idealRefreshRate; 
@property (assign) BOOL usesPreferredModeRefreshRate; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (readonly) BOOL supportsExtendedColors; 
@property (assign) long long tag; 
@property (assign) int processId; 
@property (copy) NSString * TVMode; 
@property (copy) NSString * TVSignalType; 
@property (getter=isSecure) BOOL secure; 
@property (assign) BOOL allowsDisplayCompositing; 
@property (assign) BOOL disablesUpdates; 
@property (assign) BOOL disabled; 
@property (readonly) SCD_Struct_CA26 whitepoint; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(void)freeze;
-(double)scale;
-(NSString *)orientation;
-(long long)tag;
-(CGRect)bounds;
-(void)setOrientation:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(float)contrast;
-(void)setContrast:(float)arg1 ;
-(BOOL)disabled;
-(void)update;
-(NSString *)deviceName;
-(BOOL)isSecure;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTag:(long long)arg1 ;
-(float)maximumRefreshRate;
-(void)setAllowsDisplayCompositing:(BOOL)arg1 ;
-(NSString *)uniqueId;
-(void)setSecure:(BOOL)arg1 ;
-(void)setGrayscale:(BOOL)arg1 ;
-(unsigned)displayId;
-(int)processId;
-(CGSize)overscanAmounts;
-(void)setProcessId:(int)arg1 ;
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(double)overscanAmount;
-(BOOL)supportsExtendedColors;
-(BOOL)allowsDisplayCompositing;
-(unsigned)rendererFlags;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(BOOL)isMirroringEnabled;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)_initWithCADisplayServer:(Server*)arg1 ;
-(unsigned)contextIdAtPosition:(CGPoint)arg1 ;
-(unsigned)contextIdAtPosition:(CGPoint)arg1 excludingContextIds:(id)arg2 ;
-(unsigned)clientPortAtPosition:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(CATransform3D)transformFromLayerId:(unsigned long long)arg1 inContextId:(unsigned)arg2 ;
-(NSSet *)clones;
-(void)addClone:(id)arg1 options:(id)arg2 ;
-(void)addClone:(id)arg1 ;
-(void)removeClone:(id)arg1 ;
-(void)removeAllClones;
-(CAWindowServerDisplay *)cloneMaster;
-(void)setBlanked:(BOOL)arg1 ;
-(BOOL)isBlanked;
-(void)willUnblank;
-(void)setCalibrationPhase:(unsigned)arg1 forIdentifier:(unsigned)arg2 ;
-(void)setFlipBookEnabled:(BOOL)arg1 ;
-(BOOL)isFlipBookEnabled;
-(void)setOverscanAmount:(double)arg1 ;
-(void)setOverscanAmounts:(CGSize)arg1 ;
-(void)setInvertsColors:(BOOL)arg1 ;
-(BOOL)invertsColors;
-(void)setAllowsExtendedDynamicRange:(BOOL)arg1 ;
-(BOOL)allowsExtendedDynamicRange;
-(BOOL)isGrayscale;
-(void)setColorMatrix:(float*)arg1 scale:(float)arg2 rampDuration:(double)arg3 ;
-(float)nits;
-(void)setNits:(float)arg1 ;
-(void)setAccessibilityColorMatrix:(float*)arg1 scale:(float)arg2 ;
-(void)setMaximumBrightness:(float)arg1 ;
-(float)maximumBrightness;
-(float)maximumLuminance;
-(void)setMinimumRefreshRate:(float)arg1 ;
-(float)minimumRefreshRate;
-(void)setMaximumRefreshRate:(float)arg1 ;
-(void)setIdealRefreshRate:(float)arg1 ;
-(float)idealRefreshRate;
-(void)setUsesPreferredModeRefreshRate:(BOOL)arg1 ;
-(BOOL)usesPreferredModeRefreshRate;
-(void)setTVMode:(NSString *)arg1 ;
-(NSString *)TVMode;
-(void)setTVSignalType:(NSString *)arg1 ;
-(NSString *)TVSignalType;
-(void)setDisablesUpdates:(BOOL)arg1 ;
-(BOOL)disablesUpdates;
-(SCD_Struct_CA26)whitepoint;
@end

