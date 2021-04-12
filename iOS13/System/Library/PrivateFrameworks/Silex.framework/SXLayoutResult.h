/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(SXLayoutBlueprint *)blueprint;
-(id<SXDOM>)DOM;
-(id)initWithLayoutBlueprint:(id)arg1 DOM:(id)arg2 duration:(double)arg3 ;
@end

