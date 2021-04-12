/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSUColor;

@interface TSTTableBadge : NSObject {

	int _badgeType;
	TSUColor* _color;
	double _viewScale;
	CGRect _frame;

}

@property (assign,nonatomic) int badgeType;                 //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) TSUColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
+(id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(CGRect)arg4 ;
-(void)dealloc;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setBadgeType:(int)arg1 ;
-(int)badgeType;
-(double)viewScale;
@end

