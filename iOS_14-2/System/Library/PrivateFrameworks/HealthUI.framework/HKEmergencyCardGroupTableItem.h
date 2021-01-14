/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSMutableArray, NSArray, NSString;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {

	NSMutableArray* _cumulativeRowOffsets;
	NSArray* _allSubItems;
	NSArray* _subitems;
	NSString* _titleForHeader;

}

@property (nonatomic,retain) NSArray * subitems;                     //@synthesize subitems=_subitems - In the implementation block
@property (nonatomic,retain) NSString * titleForHeader;              //@synthesize titleForHeader=_titleForHeader - In the implementation block
-(void)setSubitems:(NSArray *)arg1 ;
-(NSString *)titleForHeader;
-(long long)numberOfRows;
-(void)setData:(id)arg1 ;
-(void)setOwningViewController:(id)arg1 ;
-(NSArray *)subitems;
-(void)commitEditing;
-(void)setProfileFirstName:(id)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(void)_getSubitem:(id*)arg1 andSubitemRow:(long long*)arg2 forTableViewRow:(long long)arg3 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)setTitleForHeader:(NSString *)arg1 ;
@end

