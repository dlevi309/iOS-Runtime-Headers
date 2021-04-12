/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextView;

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView {

	TLKTextView* _descriptionViewBaselineView;

}

@property (nonatomic,retain) TLKTextView * descriptionViewBaselineView;              //@synthesize descriptionViewBaselineView=_descriptionViewBaselineView - In the implementation block
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(TLKTextView *)descriptionViewBaselineView;
-(void)setDescriptionViewBaselineView:(TLKTextView *)arg1 ;
@end

