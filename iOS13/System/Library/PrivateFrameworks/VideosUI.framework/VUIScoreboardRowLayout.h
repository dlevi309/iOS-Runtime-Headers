/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UIColor;

@interface VUIScoreboardRowLayout : NSObject {

	int _backgroundBlendMode;
	int _separatorBlendMode;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;

}

@property (assign,nonatomic) int backgroundBlendMode;                //@synthesize backgroundBlendMode=_backgroundBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int separatorBlendMode;                 //@synthesize separatorBlendMode=_separatorBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;               //@synthesize separatorColor=_separatorColor - In the implementation block
+(id)_backgroundColorForIdiom:(long long)arg1 ;
+(int)_backgroundColorBlendMode;
+(id)_topRowLayoutForIdiom:(long long)arg1 ;
+(id)_bottomLayoutForIdiom:(long long)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(int)backgroundBlendMode;
-(int)separatorBlendMode;
-(void)setSeparatorBlendMode:(int)arg1 ;
-(void)setBackgroundBlendMode:(int)arg1 ;
@end

