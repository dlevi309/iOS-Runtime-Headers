/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlPanelConfiguration.h>

@class NSString;

@interface HUTemperatureControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HUControlPanelRule> rule; 
@property (nonatomic,readonly) Class cellClass; 
+(id)_temperatureFormatter;
-(id<HUControlPanelRule>)rule;
-(Class)cellClass;
-(BOOL)shouldShowSectionTitleForItem:(id)arg1 ;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2 ;
@end

