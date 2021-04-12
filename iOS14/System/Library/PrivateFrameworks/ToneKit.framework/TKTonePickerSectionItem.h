/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKPickerSectionItem.h>
#import <libobjc.A.dylib/TKPickerContainerItem.h>

@class TKTonePickerController, NSString;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem> {

	unsigned long long _sectionHeader;
	unsigned long long _regularToneSectionIndex;
	TKTonePickerController* __parentTonePickerController;
	long long _numberOfChildren;

}

@property (assign,setter=_setParentTonePickerController:,nonatomic,__weak) TKTonePickerController * _parentTonePickerController;              //@synthesize _parentTonePickerController=__parentTonePickerController - In the implementation block
@property (assign,setter=_setNumberOfChildren:,nonatomic) long long numberOfChildren;                                                         //@synthesize numberOfChildren=_numberOfChildren - In the implementation block
@property (assign,setter=_setSectionHeader:,nonatomic) unsigned long long sectionHeader;                                                      //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (assign,setter=_setRegularToneSectionIndex:,nonatomic) unsigned long long regularToneSectionIndex;                                  //@synthesize regularToneSectionIndex=_regularToneSectionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)childItemAtIndex:(long long)arg1 ;
-(long long)numberOfChildren;
-(unsigned long long)sectionHeader;
-(void)_setNumberOfChildren:(long long)arg1 ;
-(void)_setSectionHeader:(unsigned long long)arg1 ;
-(void)_setRegularToneSectionIndex:(unsigned long long)arg1 ;
-(void)_setParentTonePickerController:(id)arg1 ;
-(unsigned long long)regularToneSectionIndex;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(TKTonePickerController *)_parentTonePickerController;
@end

