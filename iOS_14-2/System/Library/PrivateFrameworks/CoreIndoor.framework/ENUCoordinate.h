/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


@interface ENUCoordinate : NSObject {

	double _east;
	double _north;
	double _up;

}

@property (assign,nonatomic) double east;               //@synthesize east=_east - In the implementation block
@property (assign,nonatomic) double north;              //@synthesize north=_north - In the implementation block
@property (assign,nonatomic) double up;                 //@synthesize up=_up - In the implementation block
+(id)fromLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 andEcefPoint:(id)arg3 ;
-(id)initWithEast:(double)arg1 north:(double)arg2 up:(double)arg3 ;
-(id)init;
-(void)setFromLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 andEcefPoint:(id)arg3 ;
-(double)up;
-(double)north;
-(void)setNorth:(double)arg1 ;
-(void)setEast:(double)arg1 ;
-(double)east;
-(void)setUp:(double)arg1 ;
@end

