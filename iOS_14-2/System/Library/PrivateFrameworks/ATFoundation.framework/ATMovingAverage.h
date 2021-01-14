/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@interface ATMovingAverage : NSObject {

	unsigned long long _window;
	double* _values;
	unsigned long long _count;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) double average; 
-(void)update:(double)arg1 ;
-(double)average;
-(id)initWithWindow:(unsigned long long)arg1 ;
-(unsigned long long)window;
-(void)reset;
-(void)dealloc;
@end

