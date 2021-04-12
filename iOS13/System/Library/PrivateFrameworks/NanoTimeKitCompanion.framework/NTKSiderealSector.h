/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString, NTKSiderealSolarEvent;

@interface NTKSiderealSector : NSObject {

	NSString* _localizedName;
	unsigned long long _type;
	NTKSiderealSolarEvent* _startingEvent;
	NTKSiderealSolarEvent* _endingEvent;
	 _gradientStartPoint;
	 _gradientEndPoint;

}

@property (assign,nonatomic) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NTKSiderealSolarEvent * startingEvent;              //@synthesize startingEvent=_startingEvent - In the implementation block
@property (nonatomic,retain) NTKSiderealSolarEvent * endingEvent;                //@synthesize endingEvent=_endingEvent - In the implementation block
@property (assign,nonatomic)  gradientStartPoint;                                //@synthesize gradientStartPoint=_gradientStartPoint - In the implementation block
@property (assign,nonatomic)  gradientEndPoint;                                  //@synthesize gradientEndPoint=_gradientEndPoint - In the implementation block
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)localizedName;
-()gradientEndPoint;
-(void)setGradientEndPoint:;
-()gradientStartPoint;
-(void)setGradientStartPoint:;
-(id)initWithStartingEvent:(id)arg1 endingEvent:(id)arg2 ;
-(NTKSiderealSolarEvent *)startingEvent;
-(void)setStartingEvent:(NTKSiderealSolarEvent *)arg1 ;
-(NTKSiderealSolarEvent *)endingEvent;
-(void)setEndingEvent:(NTKSiderealSolarEvent *)arg1 ;
@end

