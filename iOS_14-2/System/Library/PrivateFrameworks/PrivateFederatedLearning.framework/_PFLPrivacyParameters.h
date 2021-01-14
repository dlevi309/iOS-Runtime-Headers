/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class NSString;

@interface _PFLPrivacyParameters : NSObject {

	NSString* _identifier;
	BOOL _shouldUseCustomEpsilon;
	double _rho;
	double _precision;
	double _minCDProduct;
	long long _maxRejection;
	double _normmax;
	unsigned long long _dimension;
	double _reconstructionProbability;
	double _epsilon;

}

@property (assign,nonatomic) double rho;                                    //@synthesize rho=_rho - In the implementation block
@property (assign,nonatomic) double precision;                              //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) double minCDProduct;                           //@synthesize minCDProduct=_minCDProduct - In the implementation block
@property (assign,nonatomic) long long maxRejection;                        //@synthesize maxRejection=_maxRejection - In the implementation block
@property (assign,nonatomic) double normmax;                                //@synthesize normmax=_normmax - In the implementation block
@property (assign,nonatomic) unsigned long long dimension;                  //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) double reconstructionProbability;              //@synthesize reconstructionProbability=_reconstructionProbability - In the implementation block
@property (assign,nonatomic) double epsilon;                                //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCustomEpsilon;                   //@synthesize shouldUseCustomEpsilon=_shouldUseCustomEpsilon - In the implementation block
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(void)setEpsilon:(double)arg1 ;
-(unsigned long long)dimension;
-(double)rho;
-(void)setDimension:(unsigned long long)arg1 ;
-(double)epsilon;
-(id)initWithIdentifier:(id)arg1 ;
-(double)normmax;
-(void)setRho:(double)arg1 ;
-(BOOL)populateFromDefaultFile;
-(BOOL)shouldUseCustomEpsilon;
-(double)minCDProduct;
-(long long)maxRejection;
-(double)reconstructionProbability;
-(BOOL)populateFromFile:(id)arg1 ;
-(void)setNormmax:(double)arg1 ;
-(void)setMaxRejection:(long long)arg1 ;
-(void)setMinCDProduct:(double)arg1 ;
-(void)setReconstructionProbability:(double)arg1 ;
-(void)setShouldUseCustomEpsilon:(BOOL)arg1 ;
@end

