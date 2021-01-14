/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXLayoutOptions;

@interface SXLayoutParameters : NSObject {

	SXLayoutOptions* _layoutOptions;
	unsigned long long _layoutType;
	double _expectedDuration;

}

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutType;                //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) double expectedDuration;                      //@synthesize expectedDuration=_expectedDuration - In the implementation block
-(unsigned long long)layoutType;
-(id)description;
-(SXLayoutOptions *)layoutOptions;
-(double)expectedDuration;
-(id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3 ;
@end

