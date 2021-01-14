/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<MKNearestStationViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSString *)errorMessage;
-(BOOL)_stateHasContentToDisplay;
-(void)setDelegate:(id<MKNearestStationViewControllerDelegate>)arg1 ;
-(MKMapItem *)nearestStation;
-(void)viewDidLoad;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithLineName:(id)arg1 ;
-(void)setNearestStation:(MKMapItem *)arg1 ;
-(void)transitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setErrorMessage:(NSString *)arg1 ;
@end

