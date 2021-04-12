/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol TVRUIStyleProvider, _TVRUIDevicePickerDelegate;
@class NSArray, NSString, UIView, UIButton, UITableView, _TVRUICubicSpringAnimator, _TVREventHaptic, NSIndexPath;

@interface TVRUIDevicePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _devicePickerShowing;
	id<TVRUIStyleProvider> _styleProvider;
	NSArray* _devices;
	NSString* _deviceTitle;
	id<_TVRUIDevicePickerDelegate> _delegate;
	UIView* _titleView;
	UIButton* _titleButton;
	UITableView* _tableView;
	UIView* _tableViewWrapper;
	UIView* _tableViewTopSeperator;
	UIView* _tableViewBottomSeperator;
	double _baseHeight;
	_TVRUICubicSpringAnimator* _showAnimator;
	_TVRUICubicSpringAnimator* _hideAnimator;
	_TVREventHaptic* _eventHaptic;
	NSIndexPath* _connectedDeviceIndex;
	NSArray* _nearbyUnpairedDevices;
	UIView* _nearbySectionTitleView;

}

@property (nonatomic,retain) UIView * titleView;                                                 //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIButton * titleButton;                                             //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * tableViewWrapper;                                          //@synthesize tableViewWrapper=_tableViewWrapper - In the implementation block
@property (nonatomic,retain) UIView * tableViewTopSeperator;                                     //@synthesize tableViewTopSeperator=_tableViewTopSeperator - In the implementation block
@property (nonatomic,retain) UIView * tableViewBottomSeperator;                                  //@synthesize tableViewBottomSeperator=_tableViewBottomSeperator - In the implementation block
@property (assign,nonatomic) double baseHeight;                                                  //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * showAnimator;                           //@synthesize showAnimator=_showAnimator - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * hideAnimator;                           //@synthesize hideAnimator=_hideAnimator - In the implementation block
@property (nonatomic,retain) _TVREventHaptic * eventHaptic;                                      //@synthesize eventHaptic=_eventHaptic - In the implementation block
@property (nonatomic,copy) NSIndexPath * connectedDeviceIndex;                                   //@synthesize connectedDeviceIndex=_connectedDeviceIndex - In the implementation block
@property (nonatomic,retain) NSArray * nearbyUnpairedDevices;                                    //@synthesize nearbyUnpairedDevices=_nearbyUnpairedDevices - In the implementation block
@property (nonatomic,retain) UIView * nearbySectionTitleView;                                    //@synthesize nearbySectionTitleView=_nearbySectionTitleView - In the implementation block
@property (nonatomic,retain) id<TVRUIStyleProvider> styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                                  //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSString * deviceTitle;                                             //@synthesize deviceTitle=_deviceTitle - In the implementation block
@property (assign,getter=isDevicePickerShowing,nonatomic) BOOL devicePickerShowing;              //@synthesize devicePickerShowing=_devicePickerShowing - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRUIDevicePickerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_TVRUIDevicePickerDelegate>)delegate;
-(void)setDelegate:(id<_TVRUIDevicePickerDelegate>)arg1 ;
-(NSArray *)devices;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(double)baseHeight;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)_expandedContentHeight;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setStyleProvider:(id<TVRUIStyleProvider>)arg1 ;
-(void)_toggleState;
-(id<TVRUIStyleProvider>)styleProvider;
-(BOOL)isDevicePickerShowing;
-(void)_setupDeviceTitleView;
-(void)_setupDeviceList;
-(void)_setupAnimators;
-(void)setEventHaptic:(_TVREventHaptic *)arg1 ;
-(UIButton *)titleButton;
-(UIView *)tableViewTopSeperator;
-(UIView *)tableViewWrapper;
-(void)_setupTitleButtonIfNeeded;
-(void)setTitleButton:(UIButton *)arg1 ;
-(void)setBaseHeight:(double)arg1 ;
-(void)setTableViewWrapper:(UIView *)arg1 ;
-(void)didTapWrapperView:(id)arg1 ;
-(void)setTableViewTopSeperator:(UIView *)arg1 ;
-(void)_processForUnpairedDevices:(id)arg1 ;
-(void)_sortAndReloadDevices;
-(CGRect)_preferredTableViewFrameWhenExpanded:(BOOL)arg1 ;
-(void)setNearbyUnpairedDevices:(NSArray *)arg1 ;
-(void)setShowAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(void)setHideAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(NSArray *)nearbyUnpairedDevices;
-(id)_titleViewForNearbySection;
-(void)setConnectedDeviceIndex:(NSIndexPath *)arg1 ;
-(BOOL)_accessibilityFontSizesEnabled;
-(UIView *)nearbySectionTitleView;
-(void)setNearbySectionTitleView:(UIView *)arg1 ;
-(_TVREventHaptic *)eventHaptic;
-(void)setDevicePickerShowing:(BOOL)arg1 ;
-(_TVRUICubicSpringAnimator *)showAnimator;
-(_TVRUICubicSpringAnimator *)hideAnimator;
-(double)_calculatedContentHeight;
-(double)_contentHeightForPreferredContentSizeCategory;
-(double)_defaultCalculatedContentHeight;
-(void)setDeviceTitle:(NSString *)arg1 ;
-(void)expandDeviceList;
-(void)collapseDeviceList;
-(void)didChangeToExpanded:(BOOL)arg1 ;
-(void)_updateTableFrame:(BOOL)arg1 ;
-(NSString *)deviceTitle;
-(UIView *)tableViewBottomSeperator;
-(void)setTableViewBottomSeperator:(UIView *)arg1 ;
-(NSIndexPath *)connectedDeviceIndex;
@end

