/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class VUITextLayout, VUIScoreboardRowLayout;

@interface VUIScoreboardLayout : NSObject {

	double _padding;
	VUITextLayout* _textLayout;
	VUIScoreboardRowLayout* _topRowLayout;
	VUIScoreboardRowLayout* _bottomRowLayout;
	TVCornerRadii _borderRadii;

}

@property (assign,nonatomic) TVCornerRadii borderRadii;                             //@synthesize borderRadii=_borderRadii - In the implementation block
@property (assign,nonatomic) double padding;                                        //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                            //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUIScoreboardRowLayout * topRowLayout;                 //@synthesize topRowLayout=_topRowLayout - In the implementation block
@property (nonatomic,retain) VUIScoreboardRowLayout * bottomRowLayout;              //@synthesize bottomRowLayout=_bottomRowLayout - In the implementation block
+(id)scoreboardALayout;
+(id)scoreboardBLayout;
+(id)scoreboardCLayoutWithInnerMargin:(double)arg1 ;
+(int)_textBlendMode;
+(id)_textColor:(long long)arg1 ;
-(void)setPadding:(double)arg1 ;
-(double)padding;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(TVCornerRadii)borderRadii;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUIScoreboardRowLayout *)topRowLayout;
-(VUIScoreboardRowLayout *)bottomRowLayout;
-(void)setTopRowLayout:(VUIScoreboardRowLayout *)arg1 ;
-(void)setBottomRowLayout:(VUIScoreboardRowLayout *)arg1 ;
@end

