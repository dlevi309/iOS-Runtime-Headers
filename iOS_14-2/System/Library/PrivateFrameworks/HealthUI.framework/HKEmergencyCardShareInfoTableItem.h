/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorSwitchDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class HKMedicalIDEditorSwitchCell, UITableView, NSString;

@interface HKEmergencyCardShareInfoTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate, UITextViewDelegate> {

	HKMedicalIDEditorSwitchCell* _cell;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)separatorInset;
-(UITableView *)tableView;
-(id)titleForFooter;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(void)switchWasChanged:(BOOL)arg1 ;
-(id)_editCell;
-(id)_viewCellForTableView:(id)arg1 ;
-(id)footerTextViewString;
@end

