/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UIViewController.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FMViewController : UIViewController {

	NSMutableDictionary* _kvoObservationTokens;
	NSMutableSet* _notificationTokens;

}

@property (nonatomic,retain) NSMutableDictionary * kvoObservationTokens;              //@synthesize kvoObservationTokens=_kvoObservationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationTokens;                       //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (copy,readonly) NSString * controllerNibName; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSMutableSet *)notificationTokens;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)setNotificationTokens:(NSMutableSet *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;
-(NSMutableDictionary *)kvoObservationTokens;
-(void)setKvoObservationTokens:(NSMutableDictionary *)arg1 ;
-(void)addKVOObservationToken:(id)arg1 forObject:(id)arg2 ;
-(void)addNotificationToken:(id)arg1 ;
-(NSString *)controllerNibName;
-(id)actualNibNameForName:(id)arg1 ;
@end

