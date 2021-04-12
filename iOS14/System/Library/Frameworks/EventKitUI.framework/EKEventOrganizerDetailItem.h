/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@protocol EKIdentityProtocol;
@class UITableViewCell;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	BOOL _hideDisclosureIndicator;
	id<EKIdentityProtocol> _organizerOverride;

}

@property (retain) id<EKIdentityProtocol> organizerOverride;              //@synthesize organizerOverride=_organizerOverride - In the implementation block
@property (assign,nonatomic) BOOL hideDisclosureIndicator;                //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id<EKIdentityProtocol>)organizerOverride;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(void)_updateDisclosureIndicator;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hideDisclosureIndicator;
-(void)setOrganizerOverride:(id<EKIdentityProtocol>)arg1 ;
-(void)reset;
@end

