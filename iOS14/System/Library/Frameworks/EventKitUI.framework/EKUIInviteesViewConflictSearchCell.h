/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray, UIActivityIndicatorView, UIColor;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell {

	UILabel* _label;
	NSArray* _persistentConstraints;
	double _leftInset;
	UIActivityIndicatorView* _spinner;
	UIColor* _originalLabelFontColor;

}

@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (assign,nonatomic) double leftInset;                               //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIColor * originalLabelFontColor;               //@synthesize originalLabelFontColor=_originalLabelFontColor - In the implementation block
+(id)_showMoreLocalizedString;
+(id)_grayTextColor;
+(id)_labelFont;
-(UIActivityIndicatorView *)spinner;
-(double)leftInset;
-(void)updateConstraints;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)setOriginalLabelFontColor:(UIColor *)arg1 ;
-(UIColor *)originalLabelFontColor;
-(void)_setText:(id)arg1 textColor:(id)arg2 spinnerEnabled:(BOOL)arg3 ;
-(void)setInitialSearchInProgressState;
-(void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)arg1 hasError:(BOOL)arg2 ;
-(void)setShowMoreState;
-(void)setAvailabilityRequestInProgressState;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setLeftInset:(double)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

