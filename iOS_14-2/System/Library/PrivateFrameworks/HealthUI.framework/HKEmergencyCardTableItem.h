/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class _HKMedicalIDData, NSString, UIViewController;

@interface HKEmergencyCardTableItem : NSObject {

	BOOL _isSecondaryProfile;
	BOOL _isInEditMode;
	BOOL _shouldShowHints;
	_HKMedicalIDData* _data;
	NSString* _profileFirstName;
	UIViewController* _owningViewController;

}

@property (nonatomic,retain) _HKMedicalIDData * data;                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * profileFirstName;                                 //@synthesize profileFirstName=_profileFirstName - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryProfile;                                     //@synthesize isSecondaryProfile=_isSecondaryProfile - In the implementation block
@property (nonatomic,readonly) BOOL isInEditMode;                                         //@synthesize isInEditMode=_isInEditMode - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHints;                                        //@synthesize shouldShowHints=_shouldShowHints - In the implementation block
-(UIEdgeInsets)separatorInset;
-(UIViewController *)owningViewController;
-(id)init;
-(BOOL)isInEditMode;
-(id)titleForHeader;
-(id)titleForFooter;
-(long long)numberOfRows;
-(void)setData:(_HKMedicalIDData *)arg1 ;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(_HKMedicalIDData *)data;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(void)commitEditing;
-(id)title;
-(void)timeZoneDidChange:(id)arg1 ;
-(void)setProfileFirstName:(NSString *)arg1 ;
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
-(BOOL)shouldShowHints;
-(BOOL)isSecondaryProfile;
-(NSString *)profileFirstName;
-(id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2 ;
-(void)setIsSecondaryProfile:(BOOL)arg1 ;
-(void)setShouldShowHints:(BOOL)arg1 ;
@end

