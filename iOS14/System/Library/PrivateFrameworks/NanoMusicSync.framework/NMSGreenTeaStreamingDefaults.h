/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {

	NSUserDefaults* _sharedDefaults;

}
+(id)sharedInstance;
-(id)init;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)_boolForKey:(id)arg1 ;
-(BOOL)greenTeaMusicIsMirroringStreamingSettings;
-(void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForStreaming;
-(void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
-(void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)arg1 ;
@end

