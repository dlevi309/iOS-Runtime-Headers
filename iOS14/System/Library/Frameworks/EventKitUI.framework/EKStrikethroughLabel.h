/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UILabel.h>

@interface EKStrikethroughLabel : UILabel {

	BOOL _drawsStrikethrough;
	double _firstLineHeadIndent;
	double _hyphenationFactor;

}

@property (assign,nonatomic) BOOL drawsStrikethrough;                 //@synthesize drawsStrikethrough=_drawsStrikethrough - In the implementation block
@property (assign,nonatomic) double firstLineHeadIndent;              //@synthesize firstLineHeadIndent=_firstLineHeadIndent - In the implementation block
@property (assign,nonatomic) double hyphenationFactor;                //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
-(double)hyphenationFactor;
-(void)setHyphenationFactor:(double)arg1 ;
-(double)firstLineHeadIndent;
-(void)setFirstLineHeadIndent:(double)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setDrawsStrikethrough:(BOOL)arg1 ;
-(BOOL)drawsStrikethrough;
@end

