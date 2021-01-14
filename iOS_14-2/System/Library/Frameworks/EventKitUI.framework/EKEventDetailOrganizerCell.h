/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(void)_updateDisclosureIndicator;
-(id)_organizerView;
-(id)_organizerLabel;
-(BOOL)update;
-(BOOL)hideDisclosureIndicator;
-(BOOL)shouldDisplayForEvent;
-(id)_titleView;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 organizerOverride:(id)arg3 ;
@end

