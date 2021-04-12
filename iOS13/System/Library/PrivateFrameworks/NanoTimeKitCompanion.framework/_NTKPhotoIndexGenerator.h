/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(void)setIndex:(long long)arg1 ;
-(id)initWithSize:(long long)arg1 ;
-(long long)nextRandom;
-(long long)nextSequential;
@end

