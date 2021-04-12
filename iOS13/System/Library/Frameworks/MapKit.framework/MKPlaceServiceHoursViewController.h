/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceServiceHoursViewControllerProtocol;
@class MKPlaceSectionHeaderView, UIScrollView, UIStackView, MKMapItem, NSString;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isExpanded;
	MKPlaceSectionHeaderView* _headerView;
	long long _type;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	id<MKPlaceServiceHoursViewControllerProtocol> _placeServiceDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;              //@synthesize placeServiceDelegate=_placeServiceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleString;
+(id)placeServiceHoursWithMapItem:(id)arg1 type:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_contentSizeDidChange;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)setPlaceServiceDelegate:(id<MKPlaceServiceHoursViewControllerProtocol>)arg1 ;
-(id)initWithMapItem:(id)arg1 type:(long long)arg2 ;
-(void)_showAllHeaderButtonTapped;
-(void)_updateServiceHourRows;
-(void)captureCloseAnalytics;
-(id<MKPlaceServiceHoursViewControllerProtocol>)placeServiceDelegate;
@end

