/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject {

	BrightnessSystemClient* bsc;
	BOOL ownsClient;
	int _mode;
	BOOL _modeSet;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsAdaptation;
-(BOOL)supported;
-(id)init;
-(BOOL)setAdaptationMode:(int)arg1 withPeriod:(float)arg2 ;
-(BOOL)animateFromWeakestAdaptationModeInArray:(int*)arg1 withLength:(int)arg2 toWeakestInArray:(int*)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6 ;
-(BOOL)getStrengths:(float*)arg1 nStrengths:(int)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)overrideStrengths:(float*)arg1 forModes:(int*)arg2 nModes:(int)arg3 ;
-(BOOL)getEnabled;
-(int)getAdaptationMode;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)setWeakestAdaptationModeFromArray:(int*)arg1 withLength:(int)arg2 andPeriod:(float)arg3 ;
-(id)initWithClientObj:(id)arg1 ;
-(void)dealloc;
@end

