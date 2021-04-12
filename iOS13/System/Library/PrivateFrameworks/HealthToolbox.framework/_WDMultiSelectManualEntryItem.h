/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>

@class NSArray;

@interface _WDMultiSelectManualEntryItem : WDAddDataManualEntryItem {

	NSArray* _tableViewCells;
	NSArray* _titles;
	long long _selectedIndex;

}

@property (nonatomic,retain) NSArray * titles;                     //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(id)generateValue;
-(id)tableViewCells;
-(void)cellForItemTapped:(id)arg1 ;
@end

