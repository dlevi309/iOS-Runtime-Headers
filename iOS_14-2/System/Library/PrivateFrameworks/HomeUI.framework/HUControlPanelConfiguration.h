/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)cellClass;
-(id<HUControlPanelRule>)rule;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2;

@end

