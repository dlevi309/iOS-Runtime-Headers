/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXDOM;
@class SXLayoutBlueprint;

@interface SXLayoutResult : NSObject {

	SXLayoutBlueprint* _blueprint;
	id<SXDOM> _DOM;
	double _duration;

}

@property (nonatomic,readonly) SXLayoutBlueprint * blueprint;              //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,readonly) id<SXDOM> DOM;                              //@synthesize DOM=_DOM - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
-(SXLayoutBlueprint *)blueprint;
-(double)duration;
-(id<SXDOM>)DOM;
-(id)initWithLayoutBlueprint:(id)arg1 DOM:(id)arg2 duration:(double)arg3 ;
@end

