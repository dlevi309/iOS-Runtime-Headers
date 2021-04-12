/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKIdentityProtocol;
@class NSString, EKUILabeledAvatarView, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	EKUILabeledAvatarView* _organizerView;
	UILabel* _organizerLabel;
	UILabel* _titleView;
	id<EKIdentityProtocol> _organizerOverride;
	BOOL _hideDisclosureIndicator;

}

@property (assign,nonatomic) BOOL hideDisclosureIndicator;              //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
+(id)_titleFont;
+(id)_organizerFont;
-(BOOL)update;
-(id)_titleView;
-(BOOL)shouldDisplayForEvent;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 organizerOverride:(id)arg3 ;
-(void)_updateDisclosureIndicator;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)hideDisclosureIndicator;
-(id)_organizerView;
-(id)_organizerLabel;
@end

