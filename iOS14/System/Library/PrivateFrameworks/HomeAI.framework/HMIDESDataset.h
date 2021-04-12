/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSString;

@interface HMIDESDataset : HMFObject <HMFLogging> {

	NSArray* _samples;
	NSString* _imageName;
	NSString* _boxesName;
	NSString* _weightsName;
	NSString* _classesName;

}

@property (readonly) NSArray * samples;                             //@synthesize samples=_samples - In the implementation block
@property (readonly) NSString * imageName;                          //@synthesize imageName=_imageName - In the implementation block
@property (readonly) NSString * boxesName;                          //@synthesize boxesName=_boxesName - In the implementation block
@property (readonly) NSString * weightsName;                        //@synthesize weightsName=_weightsName - In the implementation block
@property (readonly) NSString * classesName;                        //@synthesize classesName=_classesName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSArray *)samples;
-(unsigned long long)numberOfDataPoints;
-(NSString *)imageName;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithSamples:(id)arg1 imageName:(id)arg2 boxesName:(id)arg3 weightsName:(id)arg4 classesName:(id)arg5 ;
-(NSString *)boxesName;
-(NSString *)weightsName;
-(NSString *)classesName;
@end

