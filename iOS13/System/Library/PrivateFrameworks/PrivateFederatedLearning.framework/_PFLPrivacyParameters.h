/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class NSString;

@interface _PFLPrivacyParameters : NSObject {

	NSString* _identifier;
	double _rho;
	double _precision;
	double _minCDProduct;
	long long _maxRejection;
	double _normmax;
	unsigned long long _dimension;
	double _reconstructionProbability;

}

@property (assign,nonatomic) double rho;                                    //@synthesize rho=_rho - In the implementation block
@property (assign,nonatomic) double precision;                              //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) double minCDProduct;                           //@synthesize minCDProduct=_minCDProduct - In the implementation block
@property (assign,nonatomic) long long maxRejection;                        //@synthesize maxRejection=_maxRejection - In the implementation block
@property (assign,nonatomic) double normmax;                                //@synthesize normmax=_normmax - In the implementation block
@property (assign,nonatomic) unsigned long long dimension;                  //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) double reconstructionProbability;              //@synthesize reconstructionProbability=_reconstructionProbability - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)dimension;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(void)setDimension:(unsigned long long)arg1 ;
-(BOOL)populateFromDefaultFile;
-(double)reconstructionProbability;
-(double)rho;
-(double)minCDProduct;
-(long long)maxRejection;
-(double)normmax;
-(BOOL)populateFromFile:(id)arg1 ;
-(void)setNormmax:(double)arg1 ;
-(void)setMaxRejection:(long long)arg1 ;
-(void)setMinCDProduct:(double)arg1 ;
-(void)setRho:(double)arg1 ;
-(void)setReconstructionProbability:(double)arg1 ;
@end

