/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)active;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)firstLineBaseline;
-(id)_inactiveTextColor;
-(void)setUsesShortTextWidth:(BOOL)arg1 ;
-(id)_inactiveFont;
-(id)_activeFont;
-(id)_activeTextColor;
-(BOOL)usesShortTextWidth;
@end

