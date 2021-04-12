/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString;

@interface CURangingMeasurement : NSObject <NSSecureCoding> {

	unsigned _flags;
	double _distanceMeters;
	double _distanceError;
	NSError* _error;
	double _horizontalAngle;
	double _horizontalError;
	NSString* _identifier;
	double _verticalAngle;
	double _verticalError;
	double _ptsScore;
	unsigned long long _timestampTicks;

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
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned)flags;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(double)distanceMeters;
-(void)setDistanceMeters:(double)arg1 ;
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
-(double)ptsScore;
-(void)setPtsScore:(double)arg1 ;
-(unsigned long long)timestampTicks;
-(void)setTimestampTicks:(unsigned long long)arg1 ;
@end

