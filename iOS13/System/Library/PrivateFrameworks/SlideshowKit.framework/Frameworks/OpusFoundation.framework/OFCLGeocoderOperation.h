/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(double)recommendedAccuracy;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(void)dealloc;
-(void)cancelOperation;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(NSArray *)placemarks;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
@end

