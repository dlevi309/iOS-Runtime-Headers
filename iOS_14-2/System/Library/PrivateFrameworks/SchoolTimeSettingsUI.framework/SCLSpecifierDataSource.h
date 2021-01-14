/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/


@class SCLListViewController, SCLSettingsViewModel, NSArray;

@interface SCLSpecifierDataSource : NSObject {

	BOOL _active;
	SCLListViewController* _listController;
	SCLSettingsViewModel* _viewModel;
	NSArray* _specifiers;
	NSArray* _childDataSources;

}

@property (assign,nonatomic,__weak) SCLListViewController * listController;              //@synthesize listController=_listController - In the implementation block
@property (nonatomic,readonly) SCLSettingsViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSArray * allSpecifiers; 
@property (nonatomic,copy) NSArray * specifiers;                                         //@synthesize specifiers=_specifiers - In the implementation block
@property (nonatomic,copy) NSArray * childDataSources;                                   //@synthesize childDataSources=_childDataSources - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                //@synthesize active=_active - In the implementation block
+(id)keyPathsForValuesAffectingAllSpecifiers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)specifiers;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(SCLSettingsViewModel *)viewModel;
-(void)setListController:(SCLListViewController *)arg1 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(SCLListViewController *)listController;
-(NSArray *)allSpecifiers;
-(void)dealloc;
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 ;
-(void)setChildDataSources:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 specifier:(id)arg3 ;
-(NSArray *)childDataSources;
@end

