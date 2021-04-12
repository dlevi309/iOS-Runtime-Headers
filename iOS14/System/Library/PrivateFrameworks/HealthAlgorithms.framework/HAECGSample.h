/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/

#import <libobjc.A.dylib/SRSampling.h>

@class NSData, NSString;

@interface HAECGSample : NSObject <SRSampling> {

	NSData* _representation;
	double _timestamp;

}

@property (nonatomic,readonly) NSData * representation;              //@synthesize representation=_representation - In the implementation block
@property (nonatomic,readonly) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(NSData *)representation;
@end

