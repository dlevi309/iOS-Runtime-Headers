/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBlueprint.h>

@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint {

	NSDictionary* _exclusionPaths;

}

@property (nonatomic,readonly) NSDictionary * exclusionPaths;              //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)exclusionPaths;
-(void)addExclusionPath:(id)arg1 forIdentifier:(id)arg2 ;
-(void)invalidateSize;
@end

