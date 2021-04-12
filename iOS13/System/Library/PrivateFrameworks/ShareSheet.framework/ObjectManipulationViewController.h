/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol ObjectManipulationDelegate;
@class UIViewController, UITableView, NSArray, NSMutableDictionary, UIVisualEffectView, NSString;

@interface ObjectManipulationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<ObjectManipulationDelegate> _refreshDelegate;
	UIViewController* _itemPreviewViewController;
	UITableView* _tableView;
	NSArray* _customizationGroups;
	NSArray* _customizations;
	NSMutableDictionary* _sectionHeaders;
	UIVisualEffectView* _backgroundView;

}

@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * customizationGroups;                                      //@synthesize customizationGroups=_customizationGroups - In the implementation block
@property (nonatomic,retain) NSArray * customizations;                                           //@synthesize customizations=_customizations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionHeaders;                               //@synthesize sectionHeaders=_sectionHeaders - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<ObjectManipulationDelegate> refreshDelegate;              //@synthesize refreshDelegate=_refreshDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * itemPreviewViewController;                       //@synthesize itemPreviewViewController=_itemPreviewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIVisualEffectView *)backgroundView;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)donePressed;
-(void)setCustomizationGroups:(NSArray *)arg1 ;
-(void)setSectionHeaders:(NSMutableDictionary *)arg1 ;
-(NSArray *)customizationGroups;
-(NSMutableDictionary *)sectionHeaders;
-(NSArray *)customizations;
-(void)setCustomizations:(NSArray *)arg1 ;
-(UIViewController *)itemPreviewViewController;
-(void)didToggleSwitch:(id)arg1 ;
-(void)_reloadCustomizations;
-(id<ObjectManipulationDelegate>)refreshDelegate;
-(id)initWithCustomizationGroups:(id)arg1 ;
-(void)setRefreshDelegate:(id<ObjectManipulationDelegate>)arg1 ;
-(void)setItemPreviewViewController:(UIViewController *)arg1 ;
@end

