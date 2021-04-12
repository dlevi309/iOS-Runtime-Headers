/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


#import <CoreBrightness/CoreBrightness-Structs.h>
@class BrightnessSystemClient;

@interface CBBlueLightClient : NSObject {

	BrightnessSystemClient* bsc;
	/*^block*/id clientBlock;
	BOOL ownsClient;
	BOOL notificationActive;
	BOOL rangeSet;
	SCD_Struct_CB8 defaultCctRange;
	BOOL rangeOverridden;
	SCD_Struct_CB8 cctRange;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsBlueLightReduction;
-(id)init;
-(void)dealloc;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)setMode:(int)arg1 ;
-(BOOL)setActive:(BOOL)arg1 ;
-(BOOL)setSchedule:(const SCD_Struct_Ni4*)arg1 ;
-(void)enableNotifications;
-(void)disableNotifications;
-(BOOL)supported;
-(void)setSupported:(BOOL)arg1 ;
-(id)initWithClientObj:(id)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 withOption:(int)arg2 ;
-(BOOL)getBlueLightStatus:(SCD_Struct_Ni7*)arg1 ;
-(BOOL)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni7*)arg2 ;
-(void)suspendNotifications:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(BOOL)getDefaultCCTRange:(SCD_Struct_CB8*)arg1 ;
-(BOOL)getCCT:(float*)arg1 ;
-(BOOL)getCCTRange:(SCD_Struct_CB8*)arg1 ;
-(BOOL)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(BOOL)getWarningCCT:(float*)arg1 ;
-(void)setStatusNotificationBlock:(/*^block*/id)arg1 ;
-(void)suspendNotifications:(BOOL)arg1 ;
-(BOOL)setCCT:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)setCCTRange:(SCD_Struct_CB8*)arg1 ;
-(BOOL)getStrength:(float*)arg1 ;
-(BOOL)setStrength:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)getWarningStrength:(float*)arg1 ;
@end

