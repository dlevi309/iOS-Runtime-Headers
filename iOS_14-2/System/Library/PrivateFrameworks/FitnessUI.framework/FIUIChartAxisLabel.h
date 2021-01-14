/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


#import <FitnessUI/FitnessUI-Structs.h>
@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject {

	BOOL _useReversePlacement;
	NSString* _text;
	id _location;
	UIColor* _labelColor;
	UIColor* _shadowColor;
	double _shadowBlur;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL useReversePlacement;              //@synthesize useReversePlacement=_useReversePlacement - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                  //@synthesize labelColor=_labelColor - In the implementation block
@property (assign,nonatomic) UIColor * shadowColor;                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                   //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlur;                     //@synthesize shadowBlur=_shadowBlur - In the implementation block
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(CGSize)shadowOffset;
-(id)location;
-(void)setText:(NSString *)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(void)setLocation:(id)arg1 ;
-(id)description;
-(double)shadowBlur;
-(NSString *)text;
-(void)setShadowBlur:(double)arg1 ;
-(BOOL)useReversePlacement;
-(void)setUseReversePlacement:(BOOL)arg1 ;
@end

