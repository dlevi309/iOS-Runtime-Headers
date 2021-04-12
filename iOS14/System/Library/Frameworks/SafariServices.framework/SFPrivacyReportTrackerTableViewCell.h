/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPrivacyReportTrackingTableViewCell.h>

@class WBSKnownTrackingThirdParty;

@interface SFPrivacyReportTrackerTableViewCell : SFPrivacyReportTrackingTableViewCell {

	WBSKnownTrackingThirdParty* _tracker;

}

@property (nonatomic,retain) WBSKnownTrackingThirdParty * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(void)setTracker:(WBSKnownTrackingThirdParty *)arg1 ;
-(WBSKnownTrackingThirdParty *)tracker;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

