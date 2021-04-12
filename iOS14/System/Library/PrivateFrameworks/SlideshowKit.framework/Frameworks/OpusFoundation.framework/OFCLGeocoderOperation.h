/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation {

	CLGeocoder* _geocoder;
	CLLocation* _location;
	double _accuracy;
	NSArray* _placemarks;

}

@property (retain) NSArray * placemarks;              //@synthesize placemarks=_placemarks - In the implementation block
+(id)operationWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
+(double)recommendedAccuracy;
-(void)cancelOperation;
-(void)dealloc;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(NSArray *)placemarks;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
@end

