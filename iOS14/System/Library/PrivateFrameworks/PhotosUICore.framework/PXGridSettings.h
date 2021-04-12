/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXGridSettings : PXSettings {

	BOOL _disableSelectionOverlayView;
	BOOL _enableAutomaticTransitionToSelectMode;
	BOOL _simulateLongTitles;
	long long _weightingScheme;
	long long _simulatedNumberOfLocations;

}

@property (assign,nonatomic) BOOL disableSelectionOverlayView;                        //@synthesize disableSelectionOverlayView=_disableSelectionOverlayView - In the implementation block
@property (assign,nonatomic) long long weightingScheme;                               //@synthesize weightingScheme=_weightingScheme - In the implementation block
@property (assign,nonatomic) BOOL enableAutomaticTransitionToSelectMode;              //@synthesize enableAutomaticTransitionToSelectMode=_enableAutomaticTransitionToSelectMode - In the implementation block
@property (assign,nonatomic) BOOL simulateLongTitles;                                 //@synthesize simulateLongTitles=_simulateLongTitles - In the implementation block
@property (assign,nonatomic) long long simulatedNumberOfLocations;                    //@synthesize simulatedNumberOfLocations=_simulatedNumberOfLocations - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)simulateLongTitles;
-(void)setSimulateLongTitles:(BOOL)arg1 ;
-(BOOL)enableAutomaticTransitionToSelectMode;
-(void)setEnableAutomaticTransitionToSelectMode:(BOOL)arg1 ;
-(long long)weightingScheme;
-(void)setSimulatedNumberOfLocations:(long long)arg1 ;
-(long long)simulatedNumberOfLocations;
-(void)setWeightingScheme:(long long)arg1 ;
-(BOOL)disableSelectionOverlayView;
-(void)setDisableSelectionOverlayView:(BOOL)arg1 ;
@end

