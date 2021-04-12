/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2 ;
-(NSRange)bodyRange;
-(void)setTitleRange:(NSRange)arg1 ;
-(NSRange)titleRange;
-(void)setBodyRange:(NSRange)arg1 ;
-(void)updateTextAlignment;
@end

