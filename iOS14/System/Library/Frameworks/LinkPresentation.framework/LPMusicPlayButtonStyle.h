/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPSize, UIColor;

@interface LPMusicPlayButtonStyle : NSObject {

	LPSize* _size;
	UIColor* _keyColor;
	UIColor* _secondaryColor;

}

@property (nonatomic,retain) LPSize * size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * keyColor;                    //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
-(id)init;
-(void)setKeyColor:(UIColor *)arg1 ;
-(LPSize *)size;
-(UIColor *)secondaryColor;
-(void)setSize:(LPSize *)arg1 ;
-(UIColor *)keyColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
@end

