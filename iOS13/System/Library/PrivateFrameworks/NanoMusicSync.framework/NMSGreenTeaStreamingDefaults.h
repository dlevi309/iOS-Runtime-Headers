/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {

	NSUserDefaults* _sharedDefaults;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_boolForKey:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)greenTeaMusicIsMirroringStreamingSettings;
-(void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForStreaming;
-(void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
-(void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)arg1 ;
@end

