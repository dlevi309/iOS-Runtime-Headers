/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <Preferences/PSListController.h>

@class SCLSpecifierDataSource, NSArray;

@interface SCLListViewController : PSListController {

	BOOL _wantsEditingMode;
	SCLSpecifierDataSource* _specifierSource;
	long long _updateCount;
	NSArray* _pendingUpdateStartSpecifiers;
	NSArray* _pendingUpdateEndSpecifiers;

}

@property (assign,nonatomic) long long updateCount;                                 //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,copy) NSArray * pendingUpdateStartSpecifiers;                  //@synthesize pendingUpdateStartSpecifiers=_pendingUpdateStartSpecifiers - In the implementation block
@property (nonatomic,copy) NSArray * pendingUpdateEndSpecifiers;                    //@synthesize pendingUpdateEndSpecifiers=_pendingUpdateEndSpecifiers - In the implementation block
@property (nonatomic,retain) SCLSpecifierDataSource * specifierSource;              //@synthesize specifierSource=_specifierSource - In the implementation block
@property (assign,nonatomic) BOOL wantsEditingMode;                                 //@synthesize wantsEditingMode=_wantsEditingMode - In the implementation block
-(void)beginUpdates;
-(void)endUpdates;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)updateCount;
-(void)setUpdateCount:(long long)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setWantsEditingMode:(BOOL)arg1 ;
-(void)setSpecifierSource:(SCLSpecifierDataSource *)arg1 ;
-(void)loadSpecifierSource;
-(SCLSpecifierDataSource *)specifierSource;
-(void)reevaluateEditingMode;
-(BOOL)wantsEditingMode;
-(NSArray *)pendingUpdateStartSpecifiers;
-(void)setPendingUpdateStartSpecifiers:(NSArray *)arg1 ;
-(void)setPendingUpdateEndSpecifiers:(NSArray *)arg1 ;
-(NSArray *)pendingUpdateEndSpecifiers;
@end

