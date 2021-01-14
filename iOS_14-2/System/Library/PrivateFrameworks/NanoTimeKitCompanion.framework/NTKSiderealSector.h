/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NTKSiderealSolarEvent;

@interface NTKSiderealSector : NSObject <NSSecureCoding> {

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
+(BOOL)supportsSecureCoding;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-()gradientEndPoint;
-(void)setGradientEndPoint:;
-()gradientStartPoint;
-(void)setGradientStartPoint:;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartingEvent:(id)arg1 endingEvent:(id)arg2 ;
-(NTKSiderealSolarEvent *)startingEvent;
-(void)setStartingEvent:(NTKSiderealSolarEvent *)arg1 ;
-(NTKSiderealSolarEvent *)endingEvent;
-(void)setEndingEvent:(NTKSiderealSolarEvent *)arg1 ;
@end

