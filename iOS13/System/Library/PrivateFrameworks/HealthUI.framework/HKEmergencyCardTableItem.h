/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class _HKMedicalIDData, UIViewController;

@interface HKEmergencyCardTableItem : NSObject {

	BOOL _isInEditMode;
	BOOL _shouldShowHints;
	_HKMedicalIDData* _data;
	UIViewController* _owningViewController;

}

@property (nonatomic,retain) _HKMedicalIDData * data;                                     //@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
@property (nonatomic,readonly) BOOL isInEditMode;                                         //@synthesize isInEditMode=_isInEditMode - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHints;                                        //@synthesize shouldShowHints=_shouldShowHints - In the implementation block
-(id)init;
-(_HKMedicalIDData *)data;
-(void)setData:(_HKMedicalIDData *)arg1 ;
-(id)title;
-(long long)numberOfRows;
-(UIEdgeInsets)separatorInset;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(UIViewController *)owningViewController;
-(void)commitEditing;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)titleForHeader;
-(BOOL)isInEditMode;
-(void)setShouldShowHints:(BOOL)arg1 ;
-(id)titleForFooter;
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
-(id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2 ;
-(void)timeZoneDidChange:(id)arg1 ;
-(BOOL)shouldShowHints;
@end

