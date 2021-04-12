/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, NSString, UIColor;

@interface _TVTextBadge : UIView {

	NSAttributedString* _text;
	NSString* _type;
	UIColor* _tintColor;
	double _cornerRadius;
	double _lineWidth;

}

@property (nonatomic,retain) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double lineWidth;                       //@synthesize lineWidth=_lineWidth - In the implementation block
+(id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
@end

