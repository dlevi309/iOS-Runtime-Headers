/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PSUICellularPlanUniversalReference *)planReference;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(id)cellularPlanLabel:(id)arg1 ;
-(void)updateValuesAndTitles;
-(id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2 ;
@end

