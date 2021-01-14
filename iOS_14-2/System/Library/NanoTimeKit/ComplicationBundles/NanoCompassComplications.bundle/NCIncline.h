/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/


#import <NanoCompassComplications/NanoCompassComplications-Structs.h>
@interface NCIncline : NSObject {

	BOOL _hasReading;
	long long _orientation;
	double _verticalTilt;
	double _horizontalTilt;
	double _timestamp;
	CGPoint _horizontalOffset;
	SCD_Struct_NC1 _gravity;

}

@property (assign,nonatomic) SCD_Struct_NC1 gravity;                //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double verticalTilt;                   //@synthesize verticalTilt=_verticalTilt - In the implementation block
@property (assign,nonatomic) CGPoint horizontalOffset;              //@synthesize horizontalOffset=_horizontalOffset - In the implementation block
@property (assign,nonatomic) double horizontalTilt;                 //@synthesize horizontalTilt=_horizontalTilt - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReading;                       //@synthesize hasReading=_hasReading - In the implementation block
+(id)idealizedIncline;
+(id)newIncline:(id)arg1 ;
+(id)randomizedIncline;
-(double)timestamp;
-(CGPoint)horizontalOffset;
-(long long)orientation;
-(void)setGravity:(SCD_Struct_NC1)arg1 ;
-(void)setHorizontalOffset:(CGPoint)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(SCD_Struct_NC1)gravity;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)hasReading;
-(double)verticalTilt;
-(double)horizontalTilt;
-(void)setHasReading:(BOOL)arg1 ;
-(void)setHorizontalTilt:(double)arg1 ;
-(void)setVerticalTilt:(double)arg1 ;
-(BOOL)updateHasSignificantChange:(id)arg1 ;
@end

