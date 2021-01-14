/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSMapTable, NSDictionary, NSSet, NSArray;

@interface BWInferenceDependencyProvider : NSObject {

	NSMapTable* _dependenciesByInputVideoRequirements;
	NSMapTable* _dependenciesByOutputVideoRequirements;
	NSDictionary* _providedVideoRequirementsByAttachedMediaKey;
	NSSet* _consumedVideoAttachedMediaKeys;
	int _supportedPixelBufferCompressionType;

}

@property (nonatomic,readonly) NSMapTable * dependenciesByInputVideoRequirements;                     //@synthesize dependenciesByInputVideoRequirements=_dependenciesByInputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSMapTable * dependenciesByOutputVideoRequirements;                    //@synthesize dependenciesByOutputVideoRequirements=_dependenciesByOutputVideoRequirements - In the implementation block
@property (nonatomic,retain) NSDictionary * providedVideoRequirementsByAttachedMediaKey;              //@synthesize providedVideoRequirementsByAttachedMediaKey=_providedVideoRequirementsByAttachedMediaKey - In the implementation block
@property (nonatomic,retain) NSSet * consumedVideoAttachedMediaKeys;                                  //@synthesize consumedVideoAttachedMediaKeys=_consumedVideoAttachedMediaKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allInputVideoDependencies; 
@property (nonatomic,copy,readonly) NSArray * allOutputVideoDependencies; 
@property (assign,nonatomic) int supportedPixelBufferCompressionType;                                 //@synthesize supportedPixelBufferCompressionType=_supportedPixelBufferCompressionType - In the implementation block
-(id)init;
-(id)description;
-(NSDictionary *)providedVideoRequirementsByAttachedMediaKey;
-(NSArray *)allInputVideoDependencies;
-(NSArray *)allOutputVideoDependencies;
-(NSSet *)consumedVideoAttachedMediaKeys;
-(id)dependenciesForInputVideoRequirement:(id)arg1 ;
-(id)dependenciesForOutputVideoRequirement:(id)arg1 ;
-(void)setSupportedPixelBufferCompressionType:(int)arg1 ;
-(NSMapTable *)dependenciesByInputVideoRequirements;
-(NSMapTable *)dependenciesByOutputVideoRequirements;
-(void)setProvidedVideoRequirementsByAttachedMediaKey:(NSDictionary *)arg1 ;
-(void)setConsumedVideoAttachedMediaKeys:(NSSet *)arg1 ;
-(int)supportedPixelBufferCompressionType;
-(void)dealloc;
@end

