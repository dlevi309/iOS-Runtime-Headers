/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)textLabel;
@end

