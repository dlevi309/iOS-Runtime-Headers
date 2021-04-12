/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <ContactsAutocompleteUI/CNComposeHeaderView.h>

@class MFComposeDisplayMetrics;

@interface MFMailComposeHeaderView : CNComposeHeaderView {

	MFComposeDisplayMetrics* _displayMetrics;

}

@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;              //@synthesize displayMetrics=_displayMetrics - In the implementation block
-(void)layoutMarginsDidChange;
-(MFComposeDisplayMetrics *)displayMetrics;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(void)displayMetricsDidChange;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

