/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class UIView, NSString, UIColor;

@interface AVPresentationContainerViewAppearanceProxy : NSObject {

	BOOL _clipsToBounds;
	UIView* _actualView;
	NSString* _cornerCurve;
	unsigned long long _maskedCorners;
	double _cornerRadius;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic,__weak) UIView * actualView;                    //@synthesize actualView=_actualView - In the implementation block
@property (nonatomic,retain) NSString * cornerCurve;                        //@synthesize cornerCurve=_cornerCurve - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;              //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) double cornerRadius;                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL clipsToBounds;                            //@synthesize clipsToBounds=_clipsToBounds - In the implementation block
-(UIView *)actualView;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(unsigned long long)maskedCorners;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(void)setActualView:(UIView *)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(NSString *)cornerCurve;
-(BOOL)clipsToBounds;
-(void)setCornerCurve:(NSString *)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
@end

