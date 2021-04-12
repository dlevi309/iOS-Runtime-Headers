/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSString;

@interface PKTransitPassProductHeaderView : UITableViewHeaderFooterView {

	UILabel* _labelView;
	NSString* _headerLabelText;

}

@property (nonatomic,retain) NSString * headerLabelText;              //@synthesize headerLabelText=_headerLabelText - In the implementation block
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(NSString *)headerLabelText;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

