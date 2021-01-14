/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol EKTimeZoneViewControllerDelegate;
@class UISearchController, NSTimeZone, NSArray, NSString;

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate> {

	UISearchController* _searchController;
	int _style;
	int _chooserStyle;
	id<EKTimeZoneViewControllerDelegate> _delegate;
	NSTimeZone* _timeZone;
	NSArray* _cities;

}

@property (nonatomic,retain) NSArray * cities;                                                  //@synthesize cities=_cities - In the implementation block
@property (assign,nonatomic,__weak) id<EKTimeZoneViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                               //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) int chooserStyle;                                                //@synthesize chooserStyle=_chooserStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<EKTimeZoneViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithChooserStyle:(int)arg1 ;
-(NSArray *)cities;
-(void)setDelegate:(id<EKTimeZoneViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)setCities:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(int)chooserStyle;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

