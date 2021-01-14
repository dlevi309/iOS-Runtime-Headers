/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSError, NSString;

@interface CBSpatialMeasurement : NSObject <CUXPCCodable> {

	unsigned _flags;
	double _distanceMeters;
	double _distanceError;
	NSError* _error;
	double _horizontalAngle;
	double _horizontalError;
	NSString* _identifier;
	double _verticalAngle;
	double _verticalError;
	unsigned long long _timestampTicks;
	double _ptsScore;

}

@property (assign,nonatomic) double horizontalAngle;                         //@synthesize horizontalAngle=_horizontalAngle - In the implementation block
@property (assign,nonatomic) double horizontalError;                         //@synthesize horizontalError=_horizontalError - In the implementation block
@property (assign,nonatomic) double verticalAngle;                           //@synthesize verticalAngle=_verticalAngle - In the implementation block
@property (assign,nonatomic) double verticalError;                           //@synthesize verticalError=_verticalError - In the implementation block
@property (assign,nonatomic) double distanceMeters;                          //@synthesize distanceMeters=_distanceMeters - In the implementation block
@property (assign,nonatomic) double distanceError;                           //@synthesize distanceError=_distanceError - In the implementation block
@property (nonatomic,copy) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double ptsScore;                                //@synthesize ptsScore=_ptsScore - In the implementation block
@property (assign,nonatomic) unsigned long long timestampTicks;              //@synthesize timestampTicks=_timestampTicks - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(double)distanceError;
-(void)setDistanceError:(double)arg1 ;
-(double)horizontalAngle;
-(void)setHorizontalAngle:(double)arg1 ;
-(double)horizontalError;
-(void)setHorizontalError:(double)arg1 ;
-(double)verticalAngle;
-(void)setVerticalAngle:(double)arg1 ;
-(double)verticalError;
-(void)setVerticalError:(double)arg1 ;
-(void)setPtsScore:(double)arg1 ;
-(unsigned long long)timestampTicks;
-(void)setTimestampTicks:(unsigned long long)arg1 ;
-(unsigned)flags;
-(double)distanceMeters;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(double)ptsScore;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setDistanceMeters:(double)arg1 ;
@end

