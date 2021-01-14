/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/


@interface NCBearing : NSObject {

	double _bearing;

}

@property (assign,nonatomic) double bearing;              //@synthesize bearing=_bearing - In the implementation block
+(id)idealizedBearing;
+(id)randomizedBearing;
-(double)bearing;
-(void)setBearing:(double)arg1 ;
-(id)initWithBearing:(double)arg1 ;
-(id)initWithHeading:(id)arg1 ;
@end

