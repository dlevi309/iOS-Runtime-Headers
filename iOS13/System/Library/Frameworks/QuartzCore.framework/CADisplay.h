/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray, CADisplayMode, NSString, CADisplayAttributes, CADisplayPreferences;

@interface CADisplay : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,readonly) CADisplayMode * preferredMode; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect safeBounds; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) unsigned displayId; 
@property (nonatomic,readonly) long long displayType; 
@property (nonatomic,readonly) unsigned seed; 
@property (nonatomic,readonly) unsigned connectionSeed; 
@property (nonatomic,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) NSString * containerId; 
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (nonatomic,readonly) long long tag; 
@property (nonatomic,readonly) int processId; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (getter=isOverscanned,nonatomic,readonly) BOOL overscanned; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (nonatomic,readonly) double overscanAmount; 
@property (nonatomic,readonly) CGSize overscanAmounts; 
@property (getter=isCloned,nonatomic,readonly) BOOL cloned; 
@property (getter=isCloning,nonatomic,readonly) BOOL cloning; 
@property (getter=isCloningSupported,nonatomic,readonly) BOOL cloningSupported; 
@property (nonatomic,readonly) NSString * nativeOrientation; 
@property (nonatomic,readonly) NSString * currentOrientation; 
@property (nonatomic,readonly) unsigned odLUTVersion; 
@property (nonatomic,readonly) BOOL supportsExtendedColors; 
@property (nonatomic,readonly) CADisplayAttributes * externalDisplayAttributes; 
@property (nonatomic,readonly) int linkQuality; 
@property (assign,nonatomic) double latency; 
@property (nonatomic,copy) CADisplayPreferences * preferences; 
@property (nonatomic,readonly) NSString * productName; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)mainDisplay;
+(id)displays;
+(id)TVOutDisplay;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)_invalidate;
-(CADisplayMode *)currentMode;
-(double)latency;
-(long long)tag;
-(CGRect)bounds;
-(CGRect)frame;
-(long long)displayType;
-(void)update;
-(unsigned)seed;
-(NSString *)deviceName;
-(void)setPreferences:(CADisplayPreferences *)arg1 ;
-(CADisplayPreferences *)preferences;
-(NSArray *)availableModes;
-(BOOL)isOverscanned;
-(BOOL)isCloningSupported;
-(NSString *)nativeOrientation;
-(double)refreshRate;
-(CADisplayMode *)preferredMode;
-(BOOL)isExternal;
-(NSString *)uniqueId;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(BOOL)isCloned;
-(unsigned)displayId;
-(int)linkQuality;
-(id)immutableCopy;
-(NSString *)productName;
-(unsigned)connectionSeed;
-(int)processId;
-(NSString *)currentOrientation;
-(NSString *)overscanAdjustment;
-(CGSize)overscanAmounts;
-(void)setLatency:(double)arg1 ;
-(BOOL)isSupported;
-(id)_initWithDisplay:(Display*)arg1 ;
-(BOOL)setDisplayProperties:(id)arg1 ;
-(NSString *)containerId;
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(CGRect)safeBounds;
-(double)heartbeatRate;
-(long long)minimumFrameDuration;
-(double)overscanAmount;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(BOOL)isCloning;
-(unsigned)odLUTVersion;
-(BOOL)supportsExtendedColors;
-(CADisplayAttributes *)externalDisplayAttributes;
-(id)preferredModeWithCriteria:(id)arg1 ;
-(id)supportedHDRModes;
-(id)preferredHDRModes;
-(id)allowedHDRModes;
-(void)overrideDisplayTimings:(id)arg1 ;
@end

