/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, SXLayoutOptions, SXLayoutInstructions, SXLayoutBlueprint, SXDOM;

@interface SXLayoutTask : NSObject {

	unsigned long long _type;
	NSString* _identifier;
	SXLayoutOptions* _options;
	SXLayoutInstructions* _instructions;
	SXLayoutBlueprint* _blueprint;
	SXDOM* _DOM;
	double _startTime;

}

@property (nonatomic,readonly) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) SXLayoutInstructions * instructions;              //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) SXLayoutBlueprint * blueprint;                    //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,readonly) SXDOM * DOM;                                      //@synthesize DOM=_DOM - In the implementation block
@property (nonatomic,readonly) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
-(id)description;
-(SXLayoutOptions *)options;
-(unsigned long long)type;
-(NSString *)identifier;
-(double)startTime;
-(SXLayoutInstructions *)instructions;
-(SXLayoutBlueprint *)blueprint;
-(SXDOM *)DOM;
-(id)initWithOptions:(id)arg1 instructions:(id)arg2 blueprint:(id)arg3 DOM:(id)arg4 ;
-(id)initWithOptions:(id)arg1 instructions:(id)arg2 ;
@end

