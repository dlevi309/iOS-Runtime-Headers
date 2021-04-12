/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBWallpaperLegibilityProviding <NSObject>
@required
-(double)contrastInRect:(CGRect)arg1 forVariant:(long long)arg2;
-(id)averageColorForVariant:(long long)arg1;
-(double)contrastForVariant:(long long)arg1;
-(id)legibilitySettingsForVariant:(long long)arg1;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;

@end

