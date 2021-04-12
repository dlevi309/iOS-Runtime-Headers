/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)modelAssetWithURL:(id)arg1 error:(id*)arg2 ;
+(id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)modelAssetWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
+(id)modelAssetWithSpecificationURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id<MLModeling>)model;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(BOOL)load:(id*)arg1 ;
-(id)modelWithError:(id*)arg1 ;
-(id<MLClassifier>)classifier;
-(id)classifierWithError:(id*)arg1 ;
-(id<MLRegressor>)regressor;
-(id)regressorWithError:(id*)arg1 ;
-(NSURL *)compiledURL;
-(BOOL)ranLoad;
-(void)setRanLoad:(BOOL)arg1 ;
-(NSObject*<MLModeling>)asset;
-(void)setAsset:(NSObject*<MLModeling>)arg1 ;
-(MLModelConfiguration *)loadConfiguration;
@end

