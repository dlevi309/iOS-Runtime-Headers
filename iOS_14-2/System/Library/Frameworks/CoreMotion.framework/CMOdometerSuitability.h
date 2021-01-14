/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface CMOdometerSuitability : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	BOOL _suitableForRunning;
	BOOL _suitableForWalking;
	NSDate* _startDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL suitableForRunning;              //@synthesize suitableForRunning=_suitableForRunning - In the implementation block
@property (nonatomic,readonly) BOOL suitableForWalking;              //@synthesize suitableForWalking=_suitableForWalking - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)suitableForRunning;
-(BOOL)suitableForWalking;
-(id)initWithStartDate:(id)arg1 suitableForRunning:(BOOL)arg2 suitableForWalking:(BOOL)arg3 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)dealloc;
@end

