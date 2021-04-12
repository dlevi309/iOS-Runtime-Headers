/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@interface SGQuickResponsesCategoryScore : NSObject {

	unsigned long long _modelCount;
	double _average;
	double _maximum;

}

@property (nonatomic,readonly) double average;              //@synthesize average=_average - In the implementation block
@property (nonatomic,readonly) double maximum;              //@synthesize maximum=_maximum - In the implementation block
-(id)init;
-(double)maximum;
-(void)addScore:(double)arg1 ;
-(double)average;
@end

