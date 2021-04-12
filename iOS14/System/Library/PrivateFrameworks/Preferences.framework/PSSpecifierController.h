/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSSpecifierControllerDelegate;
@class UIViewController, PSSpecifier, NSMutableArray;

@interface PSSpecifierController : NSObject {

	UIViewController*<PSSpecifierControllerDelegate> _viewController;
	PSSpecifier* _specifier;
	NSMutableArray* _specifiers;
	NSMutableArray* _bundleControllers;
	NSMutableArray* _groups;

}

@property (nonatomic,retain) NSMutableArray * specifiers;                                                         //@synthesize specifiers=_specifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleControllers;                                                  //@synthesize bundleControllers=_bundleControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                                                             //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PSSpecifierControllerDelegate> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                             //@synthesize specifier=_specifier - In the implementation block
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)setViewController:(UIViewController*<PSSpecifierControllerDelegate>)arg1 ;
-(NSMutableArray *)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)numberOfSections;
-(id)specifierForID:(id)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(NSMutableArray *)groups;
-(void)reloadSpecifiers;
-(UIViewController*<PSSpecifierControllerDelegate>)viewController;
-(void)setBundleControllers:(NSMutableArray *)arg1 ;
-(id)loadSpecifiers;
-(NSMutableArray *)bundleControllers;
-(void)setSpecifiers:(NSMutableArray *)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(long long)indexForIndexPath:(id)arg1 ;
-(id)specifierAtIndex:(long long)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifier:(id)arg3 ;
-(long long)indexOfGroup:(long long)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(void)prepareSpecifiersMetadata;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 ;
-(void)createGroupIndices;
-(BOOL)_getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4 ;
-(id)_createGroupIndices:(id)arg1 ;
-(id)specifierAtIndexPath:(id)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierID:(id)arg3 ;
@end

