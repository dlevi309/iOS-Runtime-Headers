/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@interface SGQuickResponsesCategoryScore : NSObject {

	unsigned long long _modelCount;
	double _average;
	double _maximum;

}

@property (nonatomic,readonly) double average;              //@synthesize average=_average - In the implementation block
@property (nonatomic,readonly) double maximum;              //@synthesize maximum=_maximum - In the implementation block
-(double)maximum;
-(double)average;
-(id)init;
-(void)addScore:(double)arg1 ;
@end

