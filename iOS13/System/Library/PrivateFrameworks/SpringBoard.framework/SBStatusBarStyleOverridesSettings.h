/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUISettings.h>

@interface SBStatusBarStyleOverridesSettings : SBUISettings {

	BOOL _exclusive;
	BOOL _showsWhenForeground;
	int _styleOverride;

}

@property (assign,nonatomic) int styleOverride;                     //@synthesize styleOverride=_styleOverride - In the implementation block
@property (assign,nonatomic) BOOL exclusive;                        //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) BOOL showsWhenForeground;              //@synthesize showsWhenForeground=_showsWhenForeground - In the implementation block
+(id)settingsControllerModule;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(int)styleOverride;
-(void)setDefaultValues;
-(BOOL)showsWhenForeground;
-(void)setStyleOverride:(int)arg1 ;
-(void)setShowsWhenForeground:(BOOL)arg1 ;
@end

