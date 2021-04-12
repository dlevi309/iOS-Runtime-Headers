/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class MKReverseGeocoderInternal, MKPlacemark;

@interface MKReverseGeocoder : NSObject {

	MKReverseGeocoderInternal* _internal;

}

@property (assign,nonatomic,__weak) id<MKReverseGeocoderDelegate> delegate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (getter=isQuerying,nonatomic,readonly) BOOL querying; 
-(id<MKReverseGeocoderDelegate>)delegate;
-(void)setDelegate:(id<MKReverseGeocoderDelegate>)arg1 ;
-(void)cancel;
-(CLLocationCoordinate2D)coordinate;
-(void)start;
-(void)_notifyResult:(id)arg1 ;
-(void)_notifyError:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(MKPlacemark *)placemark;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isQuerying;
-(void)_notifyNoResults;
@end

