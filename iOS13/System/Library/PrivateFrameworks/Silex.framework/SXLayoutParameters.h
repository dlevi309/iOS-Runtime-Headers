/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(SXLayoutOptions *)layoutOptions;
-(double)expectedDuration;
-(unsigned long long)layoutType;
-(id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3 ;
@end

