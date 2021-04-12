/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UILabel, UITextView, NSLayoutConstraint;

@interface HealthExperienceUI.DataTypeDetailDescriptionCell : UICollectionViewCell <UITextViewDelegate> {

	 detailTextLabel;
	 attributionTextView;
	 labelSpacingConstraint;
	 item;

}

@property (readonly,nonatomic) NSString * description; 
@property (assign,__weak,nonatomic) UILabel * detailTextLabel; 
@property (assign,__weak,nonatomic) UITextView * attributionTextView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * labelSpacingConstraint; 
-(NSString *)description;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(UILabel *)detailTextLabel;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)labelSpacingConstraint;
-(void)setLabelSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(UITextView *)attributionTextView;
-(void)setAttributionTextView:(UITextView *)arg1 ;
@end

