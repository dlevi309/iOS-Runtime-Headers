/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UIActivityIndicatorView;

@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {

	UILabel* _title;
	UIImageView* _image;
	UIActivityIndicatorView* _spinner;

}
-(id)description;
-(void)safeAreaInsetsDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateSeparatorInset;
-(void)reloadWithConferenceRoom:(id)arg1 ;
@end

