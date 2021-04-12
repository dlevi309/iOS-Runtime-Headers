/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _expanded;
	id<MKPlaceServiceHoursViewControllerProtocol> _placeServiceDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                                          //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;              //@synthesize placeServiceDelegate=_placeServiceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeServiceHoursWithMapItem:(id)arg1 type:(long long)arg2 ;
+(id)titleString;
-(void)setExpanded:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setPlaceServiceDelegate:(id<MKPlaceServiceHoursViewControllerProtocol>)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(unsigned long long)_maxRows;
-(id)initWithMapItem:(id)arg1 type:(long long)arg2 ;
-(void)_showAllHeaderButtonTapped;
-(void)_updateServiceHourRows;
-(void)captureCloseAnalytics;
-(id<MKPlaceServiceHoursViewControllerProtocol>)placeServiceDelegate;
-(void)_contentSizeDidChange;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(UIScrollView *)scrollView;
@end

