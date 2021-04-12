/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShouldTracePerformance:(BOOL)arg1 ;
-(BOOL)shouldTracePerformance;
@end

