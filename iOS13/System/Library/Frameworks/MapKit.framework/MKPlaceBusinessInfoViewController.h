/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class MKMapItem, MKPlaceSectionHeaderView, _MKPlaceBusinessInfoRow, NSString;

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKMapItem* _mapItem;
	MKPlaceSectionHeaderView* _headerView;
	_MKPlaceBusinessInfoRow* _businessInfoRow;

}

@property (nonatomic,retain) MKMapItem * mapItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mapItemHasBusinessInfoToDisplay:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)infoCardThemeChanged;
-(void)_updateBusinessInfo;
-(id)_imageForApplePay;
-(id)_stringForAmenity:(int)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
@end

