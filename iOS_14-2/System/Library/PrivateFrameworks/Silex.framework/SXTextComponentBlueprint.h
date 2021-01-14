/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBlueprint.h>

@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint {

	NSDictionary* _exclusionPaths;

}

@property (nonatomic,readonly) NSDictionary * exclusionPaths;              //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
-(NSDictionary *)exclusionPaths;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addExclusionPath:(id)arg1 forIdentifier:(id)arg2 ;
-(void)invalidateSize;
@end

