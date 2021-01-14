/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)updateDisplays;
+(id)displays;
+(id)mainDisplay;
+(id)TVOutDisplay;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned)seed;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(NSString *)currentOrientation;
-(CGRect)bounds;
-(double)overscanAmount;
-(id)preferredModeWithCriteria:(id)arg1 ;
-(id)immutableCopy;
-(NSString *)containerId;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(NSString *)deviceName;
-(BOOL)isSupported;
-(CADisplayMode *)currentMode;
-(void)_invalidate;
-(NSString *)colorMode;
-(NSString *)productName;
-(void)setColorMode:(NSString *)arg1 ;
-(id)supportedHDRModes;
-(CGRect)safeBounds;
-(NSString *)overscanAdjustment;
-(NSString *)nativeOrientation;
-(unsigned)displayId;
-(int)linkQuality;
-(double)refreshRate;
-(void)overrideDisplayTimings:(id)arg1 ;
-(BOOL)isCloningSupported;
-(long long)displayType;
-(unsigned)connectionSeed;
-(CADisplayPreferences *)preferences;
-(void)setLatency:(double)arg1 ;
-(int)processId;
-(CGRect)frame;
-(void)setPreferences:(CADisplayPreferences *)arg1 ;
-(long long)tag;
-(long long)minimumFrameDuration;
-(CADisplayAttributes *)externalDisplayAttributes;
-(id)flipBookWithCapacity:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)preferredHDRModes;
-(void)update;
-(id)description;
-(double)latency;
-(NSArray *)availableModes;
-(CGSize)overscanAmounts;
-(NSString *)uniqueId;
-(double)heartbeatRate;
-(BOOL)isOverscanned;
-(CADisplayMode *)preferredMode;
-(BOOL)isExternal;
-(id)_initWithDisplay:(Display*)arg1 ;
-(BOOL)supportsExtendedColors;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(BOOL)setDisplayProperties:(id)arg1 ;
-(BOOL)allowsVirtualModes;
-(unsigned)odLUTVersion;
-(BOOL)isCloning;
-(id)allowedHDRModes;
-(void)dealloc;
-(BOOL)isCloned;
@end

