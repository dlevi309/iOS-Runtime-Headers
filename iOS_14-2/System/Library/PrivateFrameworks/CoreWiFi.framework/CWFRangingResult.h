/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDistance:(double)arg1 ;
-(NSString *)MACAddress;
-(double)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStandardDeviation:(double)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)measurements;
-(void)setMeasurements:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(double)standardDeviation;
-(void)setMACAddress:(NSString *)arg1 ;
-(unsigned long long)numberOfValidMeasurements;
-(BOOL)isEqualToRangingResult:(id)arg1 ;
-(void)setNumberOfValidMeasurements:(unsigned long long)arg1 ;
@end

