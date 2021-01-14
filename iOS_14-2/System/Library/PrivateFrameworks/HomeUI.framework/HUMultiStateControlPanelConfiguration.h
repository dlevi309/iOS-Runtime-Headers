/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlPanelConfiguration.h>

@class NSString;

@interface HUMultiStateControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (nonatomic,readonly) id<HUControlPanelRule> rule; 
@property (nonatomic,readonly) Class cellClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)cellClass;
-(id<HUControlPanelRule>)rule;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2 ;
@end

