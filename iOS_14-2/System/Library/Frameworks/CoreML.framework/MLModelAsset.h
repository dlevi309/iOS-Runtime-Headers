/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLModeling;
#import <CoreML/CoreML-Structs.h>
@class NSURL, NSObject, MLModelConfiguration;

@interface MLModelAsset : NSObject {

	BOOL _ranLoad;
	NSURL* _compiledURL;
	NSObject*<MLModeling> _asset;
	MLModelConfiguration* _loadConfiguration;

}

@property (assign) BOOL ranLoad;                                                      //@synthesize ranLoad=_ranLoad - In the implementation block
@property (retain) NSObject*<MLModeling> asset;                                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * loadConfiguration;              //@synthesize loadConfiguration=_loadConfiguration - In the implementation block
@property (readonly) NSURL * compiledURL;                                             //@synthesize compiledURL=_compiledURL - In the implementation block
@property (nonatomic,readonly) id<MLModeling> model; 
@property (nonatomic,readonly) id<MLRegressor> regressor; 
@property (nonatomic,readonly) id<MLClassifier> classifier; 
+(BOOL)isANESupported;
+(id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)fetchNetworkURLFromCompiledModelAtURL:(id)arg1 error:(id*)arg2 ;
+(id)modelAssetWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)needsANECompilationForModelAtURL:(id)arg1 result:(BOOL*)arg2 error:(id*)arg3 ;
+(id)modelAssetWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
+(id)modelAssetWithSpecificationURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)purgeANEBinaryForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)purgeANEIRForModelAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)load:(id*)arg1 ;
-(void)setAsset:(NSObject*<MLModeling>)arg1 ;
-(id<MLModeling>)model;
-(NSURL *)compiledURL;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id<MLClassifier>)classifier;
-(NSObject*<MLModeling>)asset;
-(id)modelWithError:(id*)arg1 ;
-(id<MLRegressor>)regressor;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(id)classifierWithError:(id*)arg1 ;
-(void)setRanLoad:(BOOL)arg1 ;
-(BOOL)ranLoad;
-(id)regressorWithError:(id*)arg1 ;
-(MLModelConfiguration *)loadConfiguration;
@end

