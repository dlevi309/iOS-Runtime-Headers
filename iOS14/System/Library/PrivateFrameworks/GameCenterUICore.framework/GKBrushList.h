/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKThemeBrush.h>

@class NSArray;

@interface GKBrushList : GKThemeBrush {

	NSArray* _brushList;

}

@property (nonatomic,retain) NSArray * brushList;              //@synthesize brushList=_brushList - In the implementation block
+(id)brushListWithBrushes:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBrushList:(NSArray *)arg1 ;
-(NSArray *)brushList;
-(CGRect)drawRectForBrushAtIndex:(unsigned long long)arg1 fromRect:(CGRect)arg2 input:(id)arg3 ;
-(void)willDrawRect:(CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3 ;
-(void)didDrawRect:(CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3 ;
@end

