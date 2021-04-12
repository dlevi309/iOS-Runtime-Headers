/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSArray;

@interface _NTKPhotoIndexGenerator : NSObject {

	long long _n;
	long long _count;
	long long _prevIndex;
	long long _step;
	NSArray* _stepSizes;

}
-(id)initWithSize:(long long)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)reset;
-(long long)nextRandom;
-(long long)nextSequential;
@end

