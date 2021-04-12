/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <SensorKitUI/SensorKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SRAuthorizationCellDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@protocol SRAuthorizationTableDelegate;
@class NSBundle, NSMutableDictionary, NSArray, NSString;

@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate> {

	NSBundle* _appBundle;
	NSMutableDictionary* _authState;
	id<SRAuthorizationTableDelegate> _delegate;
	NSArray* _commonUIs;
	NSArray* _allKeys;

}

@property (nonatomic,retain) NSArray * commonUIs;                                           //@synthesize commonUIs=_commonUIs - In the implementation block
@property (nonatomic,retain) NSArray * allKeys;                                             //@synthesize allKeys=_allKeys - In the implementation block
@property (nonatomic,retain) NSBundle * appBundle;                                          //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authState;                               //@synthesize authState=_authState - In the implementation block
@property (assign,nonatomic,__weak) id<SRAuthorizationTableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSArray *)allKeys;
-(id<SRAuthorizationTableDelegate>)delegate;
-(void)setDelegate:(id<SRAuthorizationTableDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dismissViewController;
-(NSBundle *)appBundle;
-(void)setAppBundle:(NSBundle *)arg1 ;
-(void)setAllKeys:(NSArray *)arg1 ;
-(void)setValue:(BOOL)arg1 indexPath:(id)arg2 ;
-(NSMutableDictionary *)authState;
-(void)setCommonUIs:(NSArray *)arg1 ;
-(void)setAuthState:(NSMutableDictionary *)arg1 ;
-(void)openPrivacy;
-(NSArray *)commonUIs;
-(void)confirmAuthChangeForService:(id)arg1 value:(BOOL)arg2 ;
@end

