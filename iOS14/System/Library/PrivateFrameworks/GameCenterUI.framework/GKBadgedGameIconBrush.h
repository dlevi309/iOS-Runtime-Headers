/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUICore/GKThemeBrush.h>

@class GKThemeBrush;

@interface GKBadgedGameIconBrush : GKThemeBrush {

	GKThemeBrush* _badgeBrush;

}

@property (nonatomic,retain) GKThemeBrush * badgeBrush;              //@synthesize badgeBrush=_badgeBrush - In the implementation block
-(id)init;
-(GKThemeBrush *)badgeBrush;
-(void)setBadgeBrush:(GKThemeBrush *)arg1 ;
-(double)scaleForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

