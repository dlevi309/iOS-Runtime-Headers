/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) NSArray * countryCodesShowingEmergencyOnlyStatus; 
@property (nonatomic,readonly) BOOL showBatteryLevel; 
@property (nonatomic,readonly) BOOL showBatteryPercentage; 
@property (nonatomic,readonly) BOOL suppressStatusBarOverrideForScreenSharing; 
@property (nonatomic,readonly) BOOL showOptimalCellDataForCarPlay; 
@property (nonatomic,readonly) BOOL showRSSI; 
@property (nonatomic,readonly) unsigned long long statusBarLogLevel; 
@property (nonatomic,readonly) BOOL showThermalWarning; 
-(void)setShowThermalWarning:(BOOL)arg1 ;
-(BOOL)showThermalWarning;
-(void)setShowRSSI:(BOOL)arg1 ;
-(BOOL)showRSSI;
-(void)setShowOptimalCellDataForCarPlay:(BOOL)arg1 ;
-(BOOL)showOptimalCellDataForCarPlay;
-(void)setShowBatteryLevel:(BOOL)arg1 ;
-(BOOL)showBatteryLevel;
-(void)setCountryCodesShowingEmergencyOnlyStatus:(NSArray *)arg1 ;
-(NSArray *)countryCodesShowingEmergencyOnlyStatus;
-(void)setStatusBarLogLevel:(unsigned long long)arg1 ;
-(unsigned long long)statusBarLogLevel;
-(void)setShowBatteryPercentage:(BOOL)arg1 ;
-(BOOL)showBatteryPercentage;
-(void)setSuppressStatusBarOverrideForScreenSharing:(BOOL)arg1 ;
-(BOOL)suppressStatusBarOverrideForScreenSharing;
-(void)_bindAndRegisterDefaults;
@end

