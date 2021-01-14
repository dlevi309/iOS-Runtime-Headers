/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGConfiguration.h>

@interface PGExampleConfiguration : PGConfiguration {

	BOOL _exampleBool;
	long long _exampleInteger;
	double _exampleDouble;

}

@property (nonatomic,readonly) long long exampleInteger;              //@synthesize exampleInteger=_exampleInteger - In the implementation block
@property (nonatomic,readonly) double exampleDouble;                  //@synthesize exampleDouble=_exampleDouble - In the implementation block
@property (nonatomic,readonly) BOOL exampleBool;                      //@synthesize exampleBool=_exampleBool - In the implementation block
-(long long)exampleInteger;
-(double)exampleDouble;
-(BOOL)exampleBool;
@end

