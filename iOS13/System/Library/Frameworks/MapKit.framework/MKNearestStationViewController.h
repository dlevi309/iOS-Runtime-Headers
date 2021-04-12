/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>

@protocol MKNearestStationViewControllerDelegate;
@class NSString, MKMapItem;

@interface MKNearestStationViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {

	NSString* _lineName;
	id<MKNearestStationViewControllerDelegate> _delegate;
	MKMapItem* _nearestStation;
	NSString* _errorMessage;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<MKNearestStationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * nearestStation;                                              //@synthesize nearestStation=_nearestStation - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                                   //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(id<MKNearestStationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKNearestStationViewControllerDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)errorMessage;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)initWithLineName:(id)arg1 ;
-(void)setNearestStation:(MKMapItem *)arg1 ;
-(void)transitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(BOOL)_stateHasContentToDisplay;
-(MKMapItem *)nearestStation;
@end

