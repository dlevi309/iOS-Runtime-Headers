/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLSampler.h>

@class NSString;

@interface PMLLaplaceSampler : NSObject <PMLSampler> {

	SCD_Struct_PM8 _rng;
	float _magnitude;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)sample;
-(id)initWithMagnitude:(float)arg1 ;
-(id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2 ;
@end

