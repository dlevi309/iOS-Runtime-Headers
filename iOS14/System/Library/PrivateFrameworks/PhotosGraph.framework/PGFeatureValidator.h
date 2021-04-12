/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSPredicate, PGFeatureExtractor, NSString;

@interface PGFeatureValidator : NSObject {

	NSPredicate* _predicate;
	PGFeatureExtractor* _featureExtractor;
	NSString* _featureName;

}

@property (nonatomic,readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) PGFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
@property (nonatomic,readonly) NSString * featureName;                             //@synthesize featureName=_featureName - In the implementation block
-(NSPredicate *)predicate;
-(NSString *)featureName;
-(PGFeatureExtractor *)featureExtractor;
-(id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureName:(id)arg3 ;
-(long long)isValidEntity:(id)arg1 error:(id*)arg2 ;
-(long long)_isValidEntity:(id)arg1 featureExtractor:(id)arg2 error:(id*)arg3 ;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(long long)featureValidatorType;
@end

