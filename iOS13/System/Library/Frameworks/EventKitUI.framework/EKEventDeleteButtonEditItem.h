/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventEditItem.h>

@class UITableViewCell, UIView;

@interface EKEventDeleteButtonEditItem : EKEventEditItem {

	UITableViewCell* _cell;
	id _deleteButtonTarget;
	SEL _deleteButtonAction;

}

@property (nonatomic,readonly) UIView * sourceViewForPopover; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(UIView *)sourceViewForPopover;
-(void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end

