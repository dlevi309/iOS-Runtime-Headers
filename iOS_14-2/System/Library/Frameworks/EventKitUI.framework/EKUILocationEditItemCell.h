/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UIActivityIndicatorView, UIButton;

@interface EKUILocationEditItemCell : UITableViewCell {

	UILabel* _title;
	UIImageView* _image;
	UIActivityIndicatorView* _spinner;
	UIButton* _clearButton;
	/*^block*/id _clearButtonTapped;

}

@property (nonatomic,copy) id clearButtonTapped;              //@synthesize clearButtonTapped=_clearButtonTapped - In the implementation block
-(void)_clearButtonTapped:(id)arg1 ;
-(id)description;
-(id)clearButtonTapped;
-(void)updateWithName:(id)arg1 sourceSupportsAvailability:(BOOL)arg2 availabilityRequestInProgress:(BOOL)arg3 availabilityType:(long long)arg4 showClearButton:(BOOL)arg5 ;
-(void)setClearButtonTapped:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

