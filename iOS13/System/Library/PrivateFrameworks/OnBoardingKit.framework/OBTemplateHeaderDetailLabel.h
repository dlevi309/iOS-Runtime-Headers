/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBTemplateLabel.h>

@interface OBTemplateHeaderDetailLabel : OBTemplateLabel {

	NSRange _titleRange;
	NSRange _bodyRange;

}

@property (assign,nonatomic) NSRange titleRange;              //@synthesize titleRange=_titleRange - In the implementation block
@property (assign,nonatomic) NSRange bodyRange;               //@synthesize bodyRange=_bodyRange - In the implementation block
-(void)updateTextAlignment;
-(void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2 ;
-(void)setTitleRange:(NSRange)arg1 ;
-(void)setBodyRange:(NSRange)arg1 ;
-(NSRange)titleRange;
-(NSRange)bodyRange;
@end

