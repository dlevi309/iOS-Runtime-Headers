/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/MKTransitDeparturesDataSourceHosting.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKTransitDepaturesViewControllerDelegate;
@class MKMapItem, MKTransitDeparturesDataSource, NSString;

@interface MKTransitDeparturesViewController : _MKTableViewController <MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _allowTransitLineSelection;
	CGRect _lastMaxWidthBounds;
	BOOL _isInSiri;
	MKMapItem* _mapItem;
	id<MKTransitDepaturesViewControllerDelegate> _delegate;
	MKTransitDeparturesDataSource* _dataSource;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MKTransitDeparturesDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isInSiri;                                                           //@synthesize isInSiri=_isInSiri - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDepaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)viewWillLayoutSubviews;
-(id<MKTransitDepaturesViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isInSiri;
-(MKTransitDeparturesDataSource *)dataSource;
-(MKMapItem *)mapItem;
-(void)setDelegate:(id<MKTransitDepaturesViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(int)currentTransitCategory;
-(id)traitsForTransitDeparturesDataSource:(id)arg1 ;
-(void)transitDeparturesDataSourceDidReload:(id)arg1 ;
-(void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2 ;
-(UIEdgeInsets)separatorInsetsForTransitDeparturesDataSource:(id)arg1 ;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg1 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3 ;
-(void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(BOOL)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5 ;
-(void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg1 ;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(void)viewDidLayoutSubviews;
@end

