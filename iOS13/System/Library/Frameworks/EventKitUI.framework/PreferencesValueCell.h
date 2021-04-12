/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKUITableViewCell.h>

@protocol EKCellShortener;
@interface PreferencesValueCell : EKUITableViewCell {

	id<EKCellShortener> _shortener;

}

@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)layoutSubviews;
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
@end

