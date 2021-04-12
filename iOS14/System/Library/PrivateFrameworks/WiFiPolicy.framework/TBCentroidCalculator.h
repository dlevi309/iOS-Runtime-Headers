/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


#import <WiFiPolicy/WiFiPolicy-Structs.h>
@class NSMutableArray;

@interface TBCentroidCalculator : NSObject {

	NSMutableArray* _points;

}

@property (nonatomic,retain) NSMutableArray * points;              //@synthesize points=_points - In the implementation block
-(CLLocationCoordinate2D)centroid;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)points;
-(BOOL)_validLatitudeValue:(double)arg1 ;
-(BOOL)_validLongitudeValue:(double)arg1 ;
-(void)addLatitude:(double)arg1 longitude:(double)arg2 ;
@end

