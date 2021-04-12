/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSAttributedString *)text;
-(NSString *)type;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)tintColor;
@end

