/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)initWithStartDate:(id)arg1 suitableForRunning:(BOOL)arg2 suitableForWalking:(BOOL)arg3 ;
-(BOOL)suitableForRunning;
-(BOOL)suitableForWalking;
@end

