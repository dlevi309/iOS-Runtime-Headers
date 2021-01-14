/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>

@class NSArray;

@interface _WDMultiSelectManualEntryItem : WDAddDataManualEntryItem {

	NSArray* _tableViewCells;
	NSArray* _titles;
	long long _selectedIndex;

}

@property (nonatomic,retain) NSArray * titles;                     //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(void)setTitles:(NSArray *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(id)generateValue;
-(NSArray *)titles;
-(id)tableViewCells;
-(void)cellForItemTapped:(id)arg1 ;
@end

