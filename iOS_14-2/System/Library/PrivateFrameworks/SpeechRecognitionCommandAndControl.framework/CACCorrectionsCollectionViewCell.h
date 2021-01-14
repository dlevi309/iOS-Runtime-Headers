/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface CACCorrectionsCollectionViewCell : UICollectionViewCell {

	UILabel* _textLabel;
	NSLayoutConstraint* _widthConstraint;

}

@property (nonatomic,readonly) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;              //@synthesize widthConstraint=_widthConstraint - In the implementation block
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(NSLayoutConstraint *)widthConstraint;
-(UILabel *)textLabel;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

