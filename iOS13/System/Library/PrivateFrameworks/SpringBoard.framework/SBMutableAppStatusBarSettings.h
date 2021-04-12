/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppStatusBarSettings.h>

@class NSNumber, _UILegibilitySettings;

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings

@property (nonatomic,retain) NSNumber * alpha; 
@property (assign,nonatomic) long long style; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) int styleOverridesToCancel; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)setAlpha:(NSNumber *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStyleOverridesToCancel:(int)arg1 ;
@end

