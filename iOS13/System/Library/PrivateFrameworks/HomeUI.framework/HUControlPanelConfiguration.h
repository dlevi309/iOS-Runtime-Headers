/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUControlPanelConfiguration <NSObject>
@property (nonatomic,readonly) id<HUControlPanelRule> rule; 
@property (nonatomic,readonly) Class cellClass; 
@optional
-(BOOL)shouldShowSectionTitleForItem:(id)arg1;
-(id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
-(id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
-(id)valueTransformerForControlItem:(id)arg1;
-(BOOL)shouldShowSectionFooterForItem:(id)arg1;

@required
-(id<HUControlPanelRule>)rule;
-(Class)cellClass;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2;

@end

