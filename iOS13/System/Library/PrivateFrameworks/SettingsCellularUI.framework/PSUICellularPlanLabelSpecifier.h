/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelSpecifier : PSSpecifier {

	PSUICellularPlanManagerCache* _planManagerCache;
	PSUICellularPlanUniversalReference* _planReference;

}

@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                 //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanUniversalReference * planReference;              //@synthesize planReference=_planReference - In the implementation block
-(id)cellularPlanLabel:(id)arg1 ;
-(void)updateValuesAndTitles;
-(id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
@end

