/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addValue:(double)arg1 ;
-(id)init;
-(double)speed;
-(void)setIsAccumulating:(BOOL)arg1 ;
-(double)trackedValue;
-(void)setTrackedValue:(double)arg1 ;
-(BOOL)isAccumulating;
@end

