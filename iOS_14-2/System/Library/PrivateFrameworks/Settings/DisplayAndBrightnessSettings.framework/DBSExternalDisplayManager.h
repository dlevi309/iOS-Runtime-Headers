/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/


@class BrightnessSystemClient, NSString, NSNumber;

@interface DBSExternalDisplayManager : NSObject {

	BrightnessSystemClient* _brightnessSystemClient;

}

@property (nonatomic,retain) BrightnessSystemClient * brightnessSystemClient;              //@synthesize brightnessSystemClient=_brightnessSystemClient - In the implementation block
@property (nonatomic,readonly) BOOL externalDisplayAvailable; 
@property (nonatomic,readonly) BOOL externalDisplayBrightnessAvailable; 
@property (nonatomic,readonly) BOOL externalDisplayAutoBrightnessAvailable; 
@property (nonatomic,retain) NSString * currentHDRMode; 
@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,readonly) NSNumber * externalDisplayBrightness; 
@property (assign,nonatomic) BOOL autoBrightnessEnabled; 
+(id)defaultManager;
-(id)supportedHDRModes;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)preferredHDRModes;
-(BOOL)matchContent;
-(void)setMatchContent:(BOOL)arg1 ;
-(BOOL)autoBrightnessEnabled;
-(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BrightnessSystemClient *)brightnessSystemClient;
-(void)setBrightnessSystemClient:(BrightnessSystemClient *)arg1 ;
-(BOOL)externalDisplayBrightnessAvailable;
-(NSString *)currentHDRMode;
-(void)setCurrentHDRMode:(NSString *)arg1 ;
-(BOOL)externalDisplayAvailable;
-(BOOL)externalDisplayAutoBrightnessAvailable;
-(NSNumber *)externalDisplayBrightness;
-(void)setExternalDisplayBrightness:(id)arg1 shouldCommit:(BOOL)arg2 ;
-(id)externalDisplayName;
@end

