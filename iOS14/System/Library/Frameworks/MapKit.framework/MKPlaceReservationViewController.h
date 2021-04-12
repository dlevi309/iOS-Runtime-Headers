/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_MKPlaceReservationInfo *)reservationInfo;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
-(void)_updateReservationInfoAnimated:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
@end

