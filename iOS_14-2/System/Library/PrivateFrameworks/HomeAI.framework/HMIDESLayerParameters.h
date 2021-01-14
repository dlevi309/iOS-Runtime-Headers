/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMIDESMutableFloatArray;

@interface HMIDESLayerParameters : HMFObject {

	NSString* _name;
	HMIDESMutableFloatArray* _weights;
	HMIDESMutableFloatArray* _biases;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) HMIDESMutableFloatArray * weights;              //@synthesize weights=_weights - In the implementation block
@property (readonly) HMIDESMutableFloatArray * biases;               //@synthesize biases=_biases - In the implementation block
-(NSString *)name;
-(HMIDESMutableFloatArray *)weights;
-(HMIDESMutableFloatArray *)biases;
-(id)initWithName:(id)arg1 weights:(id)arg2 biases:(id)arg3 ;
@end

