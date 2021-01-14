/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_CB9 defaultCctRange;
	BOOL rangeOverridden;
	SCD_Struct_CB9 cctRange;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsBlueLightReduction;
-(BOOL)supported;
-(BOOL)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(BOOL)setActive:(BOOL)arg1 ;
-(BOOL)setStrength:(float)arg1 commit:(BOOL)arg2 ;
-(id)init;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)enableNotifications;
-(BOOL)setMode:(int)arg1 ;
-(BOOL)getDefaultCCTRange:(SCD_Struct_CB9*)arg1 ;
-(void)disableNotifications;
-(BOOL)getCCT:(float*)arg1 ;
-(BOOL)getWarningStrength:(float*)arg1 ;
-(BOOL)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(void)suspendNotifications:(BOOL)arg1 ;
-(void)setStatusNotificationBlock:(/*^block*/id)arg1 ;
-(void)suspendNotifications:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)setCCT:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 withOption:(int)arg2 ;
-(BOOL)getWarningCCT:(float*)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)getStrength:(float*)arg1 ;
-(BOOL)getBlueLightStatus:(SCD_Struct_Ni8*)arg1 ;
-(BOOL)setSchedule:(const SCD_Struct_Ni5*)arg1 ;
-(BOOL)getCCTRange:(SCD_Struct_CB9*)arg1 ;
-(BOOL)setCCTRange:(SCD_Struct_CB9*)arg1 ;
-(BOOL)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni8*)arg2 ;
-(id)initWithClientObj:(id)arg1 ;
-(void)dealloc;
@end

