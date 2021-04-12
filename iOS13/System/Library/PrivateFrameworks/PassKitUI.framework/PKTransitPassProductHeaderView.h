/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSString;

@interface PKTransitPassProductHeaderView : UITableViewHeaderFooterView {

	UILabel* _labelView;
	NSString* _headerLabelText;

}

@property (nonatomic,retain) NSString * headerLabelText;              //@synthesize headerLabelText=_headerLabelText - In the implementation block
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(NSString *)headerLabelText;
@end

