/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CWFRangingResult : NSObject <NSCopying, NSSecureCoding> {

	int _status;
	NSString* _MACAddress;
	double _distance;
	double _standardDeviation;
	unsigned long long _numberOfValidMeasurements;
	NSArray* _measurements;

}

@property (nonatomic,copy) NSString * MACAddress;                                       //@synthesize MACAddress=_MACAddress - In the implementation block
@property (assign,nonatomic) double distance;                                           //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double standardDeviation;                                  //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (assign,nonatomic) int status;                                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfValidMeasurements;              //@synthesize numberOfValidMeasurements=_numberOfValidMeasurements - In the implementation block
@property (nonatomic,copy) NSArray * measurements;                                      //@synthesize measurements=_measurements - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(NSArray *)measurements;
-(void)setMeasurements:(NSArray *)arg1 ;
-(NSString *)MACAddress;
-(double)standardDeviation;
-(void)setStandardDeviation:(double)arg1 ;
-(void)setMACAddress:(NSString *)arg1 ;
-(unsigned long long)numberOfValidMeasurements;
-(BOOL)isEqualToRangingResult:(id)arg1 ;
-(void)setNumberOfValidMeasurements:(unsigned long long)arg1 ;
@end

