/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class MKPlaceReservationRowView, _MKPlaceReservationInfo, NSString;

@interface MKPlaceReservationViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	MKPlaceReservationRowView* _reservationCell;
	_MKPlaceReservationInfo* _reservationInfo;

}

@property (nonatomic,retain) _MKPlaceReservationInfo * reservationInfo;              //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(_MKPlaceReservationInfo *)reservationInfo;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
-(void)_updateReservationInfoAnimated:(BOOL)arg1 ;
@end

