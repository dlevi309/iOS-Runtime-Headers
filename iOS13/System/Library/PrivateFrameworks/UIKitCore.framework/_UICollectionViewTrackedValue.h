/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {

	NSArray* _values;
	long long _valuesCount;
	long long _currentIndex;
	BOOL _isAccumulating;
	double _trackedValue;

}

@property (assign,nonatomic) double trackedValue;              //@synthesize trackedValue=_trackedValue - In the implementation block
@property (assign,nonatomic) BOOL isAccumulating;              //@synthesize isAccumulating=_isAccumulating - In the implementation block
-(id)init;
-(void)addValue:(double)arg1 ;
-(double)speed;
-(double)trackedValue;
-(void)setTrackedValue:(double)arg1 ;
-(BOOL)isAccumulating;
-(void)setIsAccumulating:(BOOL)arg1 ;
@end

