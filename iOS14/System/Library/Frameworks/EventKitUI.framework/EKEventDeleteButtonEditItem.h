/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(UIView *)sourceViewForPopover;
@end

