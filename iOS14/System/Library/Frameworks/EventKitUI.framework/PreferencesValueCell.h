/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKUITableViewCell.h>

@protocol EKCellShortener;
@interface PreferencesValueCell : EKUITableViewCell {

	id<EKCellShortener> _shortener;

}

@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)layoutSubviews;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
@end

