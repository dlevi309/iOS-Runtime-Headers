/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)representation;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
@end

