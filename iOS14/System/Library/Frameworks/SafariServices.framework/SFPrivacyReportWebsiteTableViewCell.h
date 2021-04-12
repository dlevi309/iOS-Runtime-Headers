/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPrivacyReportTrackingTableViewCell.h>

@class WBSTrackedFirstParty;

@interface SFPrivacyReportWebsiteTableViewCell : SFPrivacyReportTrackingTableViewCell {

	WBSTrackedFirstParty* _website;

}

@property (nonatomic,retain) WBSTrackedFirstParty * website;              //@synthesize website=_website - In the implementation block
-(WBSTrackedFirstParty *)website;
-(void)setWebsite:(WBSTrackedFirstParty *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

