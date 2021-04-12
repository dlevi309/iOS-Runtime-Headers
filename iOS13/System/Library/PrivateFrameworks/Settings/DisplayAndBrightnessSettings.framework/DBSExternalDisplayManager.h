/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)supportedHDRModes;
-(id)preferredHDRModes;
-(BOOL)matchContent;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
-(BOOL)autoBrightnessEnabled;
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

