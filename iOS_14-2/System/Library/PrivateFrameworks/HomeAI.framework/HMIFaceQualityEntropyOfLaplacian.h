/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceQualityEntropyOfLaplacian : HMFObject <HMFLogging> {

	int _numBins;
	int _maxLaplacianScore;
	int _minLaplacianScore;
	float _binWidth;
	float _maxScore;
	vector<float, std::__1::allocator<float> >* _histogram;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(float)computeJunkScoreForPixelBuffer:(CVBufferRef)arg1 ;
@end

