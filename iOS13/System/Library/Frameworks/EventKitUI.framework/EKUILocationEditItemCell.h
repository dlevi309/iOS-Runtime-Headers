/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_clearButtonTapped:(id)arg1 ;
-(id)clearButtonTapped;
-(void)updateWithName:(id)arg1 sourceSupportsAvailability:(BOOL)arg2 availabilityRequestInProgress:(BOOL)arg3 availabilityType:(long long)arg4 ;
-(void)setClearButtonTapped:(id)arg1 ;
@end

