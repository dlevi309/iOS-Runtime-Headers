/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPrivacyReportGridView.h>

@protocol WBSPrivacyReportDataProvider;
@class SFPrivacyReportOverviewCellContentView;

@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView {

	id<WBSPrivacyReportDataProvider> _reportDataProvider;
	SFPrivacyReportOverviewCellContentView* _trackersPreventedFromProfilingView;
	SFPrivacyReportOverviewCellContentView* _websitesContainingTrackersView;
	SFPrivacyReportOverviewCellContentView* _mostBlockedTrackerView;
	BOOL _usesInsetStyle;

}

@property (assign,nonatomic) BOOL usesInsetStyle;              //@synthesize usesInsetStyle=_usesInsetStyle - In the implementation block
-(double)interItemSpacing;
-(BOOL)usesInsetStyle;
-(void)setUsesInsetStyle:(BOOL)arg1 ;
-(id)initWithPrivacyReportDataProvider:(id)arg1 ;
-(BOOL)itemViewCanUseCompactWidth:(id)arg1 ;
@end

