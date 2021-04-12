/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/MKTransitItemReferenceDateUpdaterDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>

@protocol MKTransitLineIncidentsViewControllerDelegate, GEOTransitLineItem;
@class MKTransitItemIncidentsController, NSDate, MKTransitItemReferenceDateUpdater, NSString;

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKTransitItemReferenceDateUpdaterDelegate, MKStackingViewControllerPreferredSizeUse> {

	MKTransitItemIncidentsController* _incidentsController;
	NSDate* _referenceDate;
	id<MKTransitLineIncidentsViewControllerDelegate> _incidentsDelegate;
	id<GEOTransitLineItem> _lineItem;
	MKTransitItemReferenceDateUpdater* _itemUpdater;

}

@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                                                      //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,copy,readonly) NSDate * referenceDate;                                                          //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,readonly) MKTransitItemReferenceDateUpdater * itemUpdater;                                      //@synthesize itemUpdater=_itemUpdater - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitLineIncidentsViewControllerDelegate> incidentsDelegate;              //@synthesize incidentsDelegate=_incidentsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(NSDate *)referenceDate;
-(id)_incidents;
-(id)initWithLineItem:(id)arg1 ;
-(void)_showIncidentDetails;
-(id<GEOTransitLineItem>)lineItem;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(MKTransitItemReferenceDateUpdater *)itemUpdater;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MKTransitLineIncidentsViewControllerDelegate>)incidentsDelegate;
-(void)updateTransitLineItemIfNeeded;
-(id)_incidentCellForRow:(long long)arg1 ;
-(void)transitUIReferenceTimeUpdated:(id)arg1 ;
-(void)_dismissTransitIncidents;
-(void)viewDidLayoutSubviews;
-(void)setIncidentsDelegate:(id<MKTransitLineIncidentsViewControllerDelegate>)arg1 ;
@end

