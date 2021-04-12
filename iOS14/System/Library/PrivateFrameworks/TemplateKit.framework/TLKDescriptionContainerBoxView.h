/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextView;

@interface TLKDescriptionContainerBoxView : NUIContainerBoxView {

	TLKTextView* _viewForFirstAndLastBaseline;

}

@property (nonatomic,retain) TLKTextView * viewForFirstAndLastBaseline;              //@synthesize viewForFirstAndLastBaseline=_viewForFirstAndLastBaseline - In the implementation block
-(id)calculateViewForLastBaselineLayout;
-(id)calculateViewForFirstBaselineLayout;
-(void)setViewForFirstAndLastBaseline:(TLKTextView *)arg1 ;
-(TLKTextView *)viewForFirstAndLastBaseline;
@end

