/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSNumber, NSString;

@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric> {

	NSNumber* _modelType;
	NSNumber* _modelLoadTime;
	NSString* _modelVersion;
	NSString* _compilerVersion;
	NSNumber* _computeUnits;
	NSNumber* _modelOrigin;
	NSNumber* _modelLoadError;
	NSString* _bundleIdentifier;
	NSString* _modelName;
	NSNumber* _firstPartyExecutable;
	NSString* _modelHash;
	NSString* _nnModelNetHash;
	NSString* _nnModelShapeHash;
	NSString* _nnModelWeightsHash;
	NSNumber* _modelDimension;

}

@property (nonatomic,copy) NSString * modelHash;                           //@synthesize modelHash=_modelHash - In the implementation block
@property (nonatomic,copy) NSString * nnModelNetHash;                      //@synthesize nnModelNetHash=_nnModelNetHash - In the implementation block
@property (nonatomic,copy) NSString * nnModelShapeHash;                    //@synthesize nnModelShapeHash=_nnModelShapeHash - In the implementation block
@property (nonatomic,copy) NSString * nnModelWeightsHash;                  //@synthesize nnModelWeightsHash=_nnModelWeightsHash - In the implementation block
@property (nonatomic,copy) NSNumber * modelDimension;                      //@synthesize modelDimension=_modelDimension - In the implementation block
@property (nonatomic,copy) NSNumber * modelType;                           //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,copy) NSNumber * modelLoadTime;                       //@synthesize modelLoadTime=_modelLoadTime - In the implementation block
@property (nonatomic,copy) NSString * modelVersion;                        //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,copy) NSString * compilerVersion;                     //@synthesize compilerVersion=_compilerVersion - In the implementation block
@property (nonatomic,copy) NSNumber * computeUnits;                        //@synthesize computeUnits=_computeUnits - In the implementation block
@property (nonatomic,copy) NSNumber * modelOrigin;                         //@synthesize modelOrigin=_modelOrigin - In the implementation block
@property (nonatomic,copy) NSNumber * modelLoadError;                      //@synthesize modelLoadError=_modelLoadError - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * modelName;                           //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,copy) NSNumber * firstPartyExecutable;                //@synthesize firstPartyExecutable=_firstPartyExecutable - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)modelType;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)modelVersion;
-(void)extractAndSetModelDetailsFromArchive:(MLModelInputArchiver*)arg1 ;
-(id)numberFromCString:(const char*)arg1 ;
-(NSNumber *)modelLoadTime;
-(void)setModelLoadTime:(NSNumber *)arg1 ;
-(NSString *)modelHash;
-(NSString *)compilerVersion;
-(void)setCompilerVersion:(NSString *)arg1 ;
-(NSNumber *)modelOrigin;
-(void)setModelOrigin:(NSNumber *)arg1 ;
-(NSNumber *)modelLoadError;
-(void)setModelLoadError:(NSNumber *)arg1 ;
-(NSNumber *)firstPartyExecutable;
-(void)setFirstPartyExecutable:(NSNumber *)arg1 ;
-(void)setModelHash:(NSString *)arg1 ;
-(NSString *)nnModelNetHash;
-(void)setNnModelNetHash:(NSString *)arg1 ;
-(NSString *)nnModelShapeHash;
-(void)setNnModelShapeHash:(NSString *)arg1 ;
-(NSString *)nnModelWeightsHash;
-(void)setNnModelWeightsHash:(NSString *)arg1 ;
-(NSNumber *)modelDimension;
-(void)setModelDimension:(NSNumber *)arg1 ;
-(void)setComputeUnits:(NSNumber *)arg1 ;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSNumber *)computeUnits;
-(NSString *)modelName;
-(NSString *)name;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setModelName:(NSString *)arg1 ;
-(void)setModelType:(NSNumber *)arg1 ;
@end

