/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class UIColor;

@interface GKButtonStyle : NSObject {

	BOOL _clipToBounds;
	double _cornerRadius;
	UIColor* _backgroundColor;
	id _compositingFilter;
	UIEdgeInsets _titleEdgeInsets;

}

@property (assign,nonatomic) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL clipToBounds;                         //@synthesize clipToBounds=_clipToBounds - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets;              //@synthesize titleEdgeInsets=_titleEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) id compositingFilter;                      //@synthesize compositingFilter=_compositingFilter - In the implementation block
+(id)defaultStyle;
+(id)standardStyle;
-(void)applyToButton:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(id)compositingFilter;
-(id)initWithCornerRadius:(double)arg1 andBackgroundColor:(id)arg2 ;
-(BOOL)clipToBounds;
-(void)setClipToBounds:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)titleEdgeInsets;
@end

