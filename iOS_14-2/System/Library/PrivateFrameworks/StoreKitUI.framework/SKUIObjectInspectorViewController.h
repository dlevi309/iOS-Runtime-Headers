/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SKUIObjectInspector.h>

@protocol SKUIInspectableObject;
@class NSString, UIView, UIVisualEffectView, UINavigationBar, UITableView, _SKUIInspectablePropertySection, NSMutableArray;

@interface SKUIObjectInspectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SKUIObjectInspector> {

	id<SKUIInspectableObject> _inspectableObject;
	UIView* _contentView;
	UIVisualEffectView* _backgroundView;
	UINavigationBar* _navigationBar;
	UITableView* _tableView;
	_SKUIInspectablePropertySection* _currentSection;
	NSMutableArray* _sections;

}

@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;                               //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) id<SKUIInspectableObject> inspectableObject;                   //@synthesize inspectableObject=_inspectableObject - In the implementation block
@property (nonatomic,retain) _SKUIInspectablePropertySection * currentSection;              //@synthesize currentSection=_currentSection - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                     //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * friendlyName; 
@property (nonatomic,copy) NSString * information; 
+(void)showInspectableObject:(id)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setFriendlyName:(NSString *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(NSMutableArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(UINavigationBar *)navigationBar;
-(void)populate;
-(void)viewDidLoad;
-(void)setInformation:(NSString *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)friendlyName;
-(NSString *)information;
-(UIView *)contentView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setupConstraints;
-(void)dismiss;
-(void)setCurrentSection:(_SKUIInspectablePropertySection *)arg1 ;
-(_SKUIInspectablePropertySection *)currentSection;
-(void)beginSectionWithFriendlyName:(id)arg1 ;
-(void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2 ;
-(void)endSection;
-(id)initWithInspectableObject:(id)arg1 ;
-(void)showFromViewController:(id)arg1 ;
-(void)setInspectableObject:(id<SKUIInspectableObject>)arg1 ;
-(void)handleBackgroundTap:(id)arg1 ;
-(CGRect)calculateContentViewFrameWithParentBounds:(CGRect)arg1 withTraitCollection:(id)arg2 ;
-(id<SKUIInspectableObject>)inspectableObject;
@end

