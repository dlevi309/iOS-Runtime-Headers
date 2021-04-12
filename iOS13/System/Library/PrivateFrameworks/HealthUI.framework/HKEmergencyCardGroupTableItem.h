/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSMutableArray, NSArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {

	NSMutableArray* _cumulativeRowOffsets;
	NSArray* _subitems;

}

@property (nonatomic,retain) NSArray * subitems;              //@synthesize subitems=_subitems - In the implementation block
-(void)setData:(id)arg1 ;
-(long long)numberOfRows;
-(NSArray *)subitems;
-(void)setSubitems:(NSArray *)arg1 ;
-(void)setOwningViewController:(id)arg1 ;
-(void)commitEditing;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)_getSubitem:(id*)arg1 andSubitemRow:(long long*)arg2 forTableViewRow:(long long)arg3 ;
@end

