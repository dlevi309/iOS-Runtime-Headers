/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXFooterSettings : PXSettings {

	BOOL _shouldAlternateTitleWithGridCycle;
	BOOL _simulateCPLDisabled;
	BOOL _simulateImportantInformation;
	BOOL _simulateAnimatedIconMode;
	BOOL _showFilterView;
	float _minimumDisplayedProgress;
	long long _alternateTitleGridCycleCount;
	double _alternateTitleGridCycleDelay;
	double _alternateTitleCyclingInterval;
	double _animationDelay;
	long long _simulatedAnimatedIconMode;

}

@property (assign,nonatomic) BOOL shouldAlternateTitleWithGridCycle;              //@synthesize shouldAlternateTitleWithGridCycle=_shouldAlternateTitleWithGridCycle - In the implementation block
@property (assign,nonatomic) long long alternateTitleGridCycleCount;              //@synthesize alternateTitleGridCycleCount=_alternateTitleGridCycleCount - In the implementation block
@property (assign,nonatomic) double alternateTitleGridCycleDelay;                 //@synthesize alternateTitleGridCycleDelay=_alternateTitleGridCycleDelay - In the implementation block
@property (assign,nonatomic) double alternateTitleCyclingInterval;                //@synthesize alternateTitleCyclingInterval=_alternateTitleCyclingInterval - In the implementation block
@property (assign,nonatomic) double animationDelay;                               //@synthesize animationDelay=_animationDelay - In the implementation block
@property (assign,nonatomic) float minimumDisplayedProgress;                      //@synthesize minimumDisplayedProgress=_minimumDisplayedProgress - In the implementation block
@property (assign,nonatomic) BOOL simulateCPLDisabled;                            //@synthesize simulateCPLDisabled=_simulateCPLDisabled - In the implementation block
@property (assign,nonatomic) BOOL simulateImportantInformation;                   //@synthesize simulateImportantInformation=_simulateImportantInformation - In the implementation block
@property (assign,nonatomic) BOOL simulateAnimatedIconMode;                       //@synthesize simulateAnimatedIconMode=_simulateAnimatedIconMode - In the implementation block
@property (assign,nonatomic) long long simulatedAnimatedIconMode;                 //@synthesize simulatedAnimatedIconMode=_simulatedAnimatedIconMode - In the implementation block
@property (assign,nonatomic) BOOL showFilterView;                                 //@synthesize showFilterView=_showFilterView - In the implementation block
+(id)sharedInstance;
+(void)resetLastShownInfo;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setAnimationDelay:(double)arg1 ;
-(BOOL)shouldAlternateTitleWithGridCycle;
-(float)minimumDisplayedProgress;
-(long long)simulatedAnimatedIconMode;
-(BOOL)simulateCPLDisabled;
-(void)setSimulateImportantInformation:(BOOL)arg1 ;
-(void)setAlternateTitleCyclingInterval:(double)arg1 ;
-(void)setSimulatedAnimatedIconMode:(long long)arg1 ;
-(BOOL)simulateImportantInformation;
-(double)animationDelay;
-(void)setSimulateAnimatedIconMode:(BOOL)arg1 ;
-(void)setShowFilterView:(BOOL)arg1 ;
-(void)setAlternateTitleGridCycleDelay:(double)arg1 ;
-(double)alternateTitleGridCycleDelay;
-(void)setMinimumDisplayedProgress:(float)arg1 ;
-(BOOL)simulateAnimatedIconMode;
-(double)alternateTitleCyclingInterval;
-(void)setSimulateCPLDisabled:(BOOL)arg1 ;
-(void)setAlternateTitleGridCycleCount:(long long)arg1 ;
-(long long)alternateTitleGridCycleCount;
-(void)setShouldAlternateTitleWithGridCycle:(BOOL)arg1 ;
-(BOOL)showFilterView;
@end

