/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class NSString, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, UIImageView, UILabel, NSLayoutConstraint, UIImage;

@interface STDashedVerticalDivider : UIView {

	BOOL _selected;
	NSString* _labelText;
	NSLayoutXAxisAnchor* _dashedLineCenterXAnchor;
	NSLayoutYAxisAnchor* _labelTopAnchor;
	UIImageView* _dashedLine;
	UILabel* _label;
	NSLayoutConstraint* _labelLeftConstraint;

}

@property (nonatomic,retain) UIImageView * dashedLine;                              //@synthesize dashedLine=_dashedLine - In the implementation block
@property (nonatomic,retain) UILabel * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeftConstraint;              //@synthesize labelLeftConstraint=_labelLeftConstraint - In the implementation block
@property (readonly) UIImage * dashedLineImage; 
@property (nonatomic,copy) NSString * labelText;                                    //@synthesize labelText=_labelText - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * dashedLineCenterXAnchor;                 //@synthesize dashedLineCenterXAnchor=_dashedLineCenterXAnchor - In the implementation block
@property (readonly) NSLayoutYAxisAnchor * labelTopAnchor;                          //@synthesize labelTopAnchor=_labelTopAnchor - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(id)initWithTintColor:(id)arg1 ;
-(UIImage *)dashedLineImage;
-(NSLayoutConstraint *)labelLeftConstraint;
-(NSLayoutXAxisAnchor *)dashedLineCenterXAnchor;
-(NSLayoutYAxisAnchor *)labelTopAnchor;
-(UIImageView *)dashedLine;
-(void)setDashedLine:(UIImageView *)arg1 ;
-(void)setLabelLeftConstraint:(NSLayoutConstraint *)arg1 ;
@end

