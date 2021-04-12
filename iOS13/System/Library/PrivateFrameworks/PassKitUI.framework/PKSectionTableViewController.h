/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>

@interface PKSectionTableViewController : UITableViewController {

	unsigned long long _numberOfSections;
	SCD_Struct_PK26* _currentMap;
	SCD_Struct_PK26* _bufferedMap;
	BOOL _skipSetupForReadableContentGuide;

}

@property (assign,nonatomic) BOOL skipSetupForReadableContentGuide;              //@synthesize skipSetupForReadableContentGuide=_skipSetupForReadableContentGuide - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(BOOL)reloadData;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2 ;
-(void)setSkipSetupForReadableContentGuide:(BOOL)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)reloadSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForReloadingSection:(unsigned long long)arg1 ;
-(unsigned long long)sectionForIndex:(unsigned long long)arg1 ;
-(BOOL)isSectionMapped:(unsigned long long)arg1 ;
-(unsigned long long)indexForSection:(unsigned long long)arg1 ;
-(BOOL)_recomputeMappedSections;
-(void)_swapBuffers;
-(long long)rowAnimationForDeletingSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForInsertingSection:(unsigned long long)arg1 ;
-(BOOL)recomputeMappedSectionsAndReloadSections:(id)arg1 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg1 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned long long)arg1 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
-(unsigned long long)numberOfMappedSections;
-(BOOL)isMappingValid;
-(BOOL)skipSetupForReadableContentGuide;
@end

