/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CAShapeLayer, NSString;

@interface _NTKCFaceDetailCollectionCellLabel : UIView {

	UILabel* _label;
	CAShapeLayer* _background;
	BOOL _usesShortTextWidth;
	BOOL _active;

}

@property (assign,nonatomic) BOOL usesShortTextWidth;                 //@synthesize usesShortTextWidth=_usesShortTextWidth - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) double firstLineBaseline; 
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(double)firstLineBaseline;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_inactiveTextColor;
-(NSString *)text;
-(void)setUsesShortTextWidth:(BOOL)arg1 ;
-(id)_inactiveFont;
-(id)_activeFont;
-(id)_activeTextColor;
-(BOOL)usesShortTextWidth;
@end

