/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKUITableViewCellWithPrimaryAndSecondaryFonts.h>

@class UIImageView, UILabel, NSArray, UIColor, NSString;

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {

	UIImageView* _colorDotView;
	UILabel* _titleTextLabel;
	UILabel* _locationTextLabel;
	UILabel* _timeTextLabelWithThisTimeZone;
	UILabel* _timeTextLabelWithResultTimeZone;
	UILabel* _inviteesTextLabel;
	UILabel* _foundInTextLabel;
	NSArray* _secondaryLabels;
	UIColor* _eventCalendarColor;
	NSString* _eventTitle;
	NSString* _eventLocation;
	NSString* _eventTimeWithThisTimeZone;
	NSString* _eventTimeWithResultTimeZone;
	NSString* _eventInvitees;
	NSString* _eventFoundIn;
	NSArray* _ekUIAutocompleteOccurrenceTableViewCellConstraints;

}
+(id)_titleStringForResult:(id)arg1 ;
+(id)_locationStringForResult:(id)arg1 ;
+(id)_timeStringForResult:(id)arg1 usingTimeZone:(id)arg2 ;
+(BOOL)_shouldShowOtherTimeZoneForResult:(id)arg1 ;
+(id)_inviteeStringForResult:(id)arg1 ;
+(id)_foundInStringForResult:(id)arg1 ;
+(id)primaryTextColor;
+(id)secondaryTextColor;
+(id)secondaryTextLabelFont;
+(id)reuseIdentifier;
+(double)cellHeightForResult:(id)arg1 forWidth:(double)arg2 ;
+(double)_verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)arg1 ;
+(double)_verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)arg1 ;
+(double)_verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)arg1 ;
-(void)_setupConstraints;
-(double)_verticalSpacingBottomToBaselineForBottomLabel;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(id)_createPrimaryLabel;
-(id)_createSecondaryLabel;
-(void)_setLabelFonts;
-(id)_createLabelWithColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)_verticalSpacingTopToColorDot;
-(double)_verticalSpacingTopToBaselineForTopLabel;
-(void)_addConstraintsForLabel:(id)arg1 belowView:(id)arg2 toArray:(id)arg3 ;
-(double)_verticalSpacingTopToBaselineForBottomLabel;
@end

