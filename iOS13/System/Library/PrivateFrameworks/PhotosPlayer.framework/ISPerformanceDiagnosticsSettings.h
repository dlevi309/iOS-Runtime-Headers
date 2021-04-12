/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPerformanceDiagnosticsSettings : ISSettings {

	BOOL _shouldTracePerformance;

}

@property (assign,nonatomic) BOOL shouldTracePerformance;              //@synthesize shouldTracePerformance=_shouldTracePerformance - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)shouldTracePerformance;
-(void)setShouldTracePerformance:(BOOL)arg1 ;
@end

