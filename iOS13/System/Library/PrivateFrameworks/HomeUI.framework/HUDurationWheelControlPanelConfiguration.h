/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlPanelConfiguration.h>

@class NSString;

@interface HUDurationWheelControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HUControlPanelRule> rule; 
@property (nonatomic,readonly) Class cellClass; 
-(id<HUControlPanelRule>)rule;
-(Class)cellClass;
-(BOOL)shouldShowSectionTitleForItem:(id)arg1 ;
-(id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2 ;
-(id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2 ;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2 ;
-(BOOL)shouldShowSectionFooterForItem:(id)arg1 ;
-(id)_characteristicTypesFromControlPanelItem:(id)arg1 ;
@end

