/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSMapTable, NSDictionary, NSSet, NSArray;

@interface BWInferenceDependencyProvider : NSObject {

	NSMapTable* _dependenciesByInputVideoRequirements;
	NSMapTable* _dependenciesByOutputVideoRequirements;
	NSDictionary* _providedVideoRequirementsByAttachedMediaKey;
	NSSet* _consumedVideoAttachedMediaKeys;

}

@property (nonatomic,readonly) NSMapTable * dependenciesByInputVideoRequirements;                     //@synthesize dependenciesByInputVideoRequirements=_dependenciesByInputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSMapTable * dependenciesByOutputVideoRequirements;                    //@synthesize dependenciesByOutputVideoRequirements=_dependenciesByOutputVideoRequirements - In the implementation block
@property (nonatomic,retain) NSDictionary * providedVideoRequirementsByAttachedMediaKey;              //@synthesize providedVideoRequirementsByAttachedMediaKey=_providedVideoRequirementsByAttachedMediaKey - In the implementation block
@property (nonatomic,retain) NSSet * consumedVideoAttachedMediaKeys;                                  //@synthesize consumedVideoAttachedMediaKeys=_consumedVideoAttachedMediaKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allInputVideoDependencies; 
@property (nonatomic,copy,readonly) NSArray * allOutputVideoDependencies; 
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)providedVideoRequirementsByAttachedMediaKey;
-(NSArray *)allInputVideoDependencies;
-(NSArray *)allOutputVideoDependencies;
-(NSSet *)consumedVideoAttachedMediaKeys;
-(id)dependenciesForInputVideoRequirement:(id)arg1 ;
-(id)dependenciesForOutputVideoRequirement:(id)arg1 ;
-(NSMapTable *)dependenciesByInputVideoRequirements;
-(NSMapTable *)dependenciesByOutputVideoRequirements;
-(void)setProvidedVideoRequirementsByAttachedMediaKey:(NSDictionary *)arg1 ;
-(void)setConsumedVideoAttachedMediaKeys:(NSSet *)arg1 ;
@end

