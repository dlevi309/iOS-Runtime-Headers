/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_notifyResult:(id)arg1 ;
-(id<MKReverseGeocoderDelegate>)delegate;
-(CLLocationCoordinate2D)coordinate;
-(void)start;
-(void)setDelegate:(id<MKReverseGeocoderDelegate>)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isQuerying;
-(void)_notifyNoResults;
-(void)_notifyError:(id)arg1 ;
-(MKPlacemark *)placemark;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)cancel;
@end

