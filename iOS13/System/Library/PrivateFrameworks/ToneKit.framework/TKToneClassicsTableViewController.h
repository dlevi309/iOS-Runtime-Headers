/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <libobjc.A.dylib/TKTonePickerTableViewLayoutMarginsObserver.h>
#import <libobjc.A.dylib/TKTonePickerTableViewSeparatorObserver.h>

@protocol TKTonePickerTableViewControllerHelper;
@class TKTonePickerItem, NSString;

@interface TKToneClassicsTableViewController : UITableViewController <PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver> {

	TKTonePickerItem* _classicTonesHeaderItem;
	id<TKTonePickerTableViewControllerHelper> _tonePickerTableViewControllerHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TKTonePickerTableViewControllerHelper> tonePickerTableViewControllerHelper;              //@synthesize tonePickerTableViewControllerHelper=_tonePickerTableViewControllerHelper - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1 ;
-(void)separatorColorDidChangeInTonePickerTableView:(id)arg1 ;
-(void)setTonePickerTableViewControllerHelper:(id<TKTonePickerTableViewControllerHelper>)arg1 ;
-(void)didReloadTones;
-(void)didUpdateCheckedStatus:(BOOL)arg1 ofToneClassicsPickerItem:(id)arg2 ;
-(void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2 ;
-(id)initWithClassicTonesHeaderItem:(id)arg1 ;
-(id<TKTonePickerTableViewControllerHelper>)tonePickerTableViewControllerHelper;
@end

