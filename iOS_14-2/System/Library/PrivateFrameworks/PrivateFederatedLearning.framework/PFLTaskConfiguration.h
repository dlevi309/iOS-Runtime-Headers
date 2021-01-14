/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSNumber, MLModelConfiguration, NSURL;

@interface PFLTaskConfiguration : NSObject <NSSecureCoding> {

	int _expectedModelVersion;
	unsigned _privatizationNormBinCount;
	NSString* _taskId;
	NSString* _dataProviderIdentifier;
	NSArray* _trainableLayers;
	double _validationSplit;
	NSString* _eligibilityCheckIdentifier;
	NSNumber* _eligiblityProbability;
	NSString* _metricsIdentifier;
	double _privatizationNormMax;
	NSString* _modelIdentifier;
	MLModelConfiguration* _modelConfiguration;
	NSURL* _modelTemporaryURL;

}

@property (nonatomic,retain) NSString * taskId;                                        //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,retain) NSString * modelIdentifier;                               //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,retain) NSString * dataProviderIdentifier;                        //@synthesize dataProviderIdentifier=_dataProviderIdentifier - In the implementation block
@property (assign,nonatomic) int expectedModelVersion;                                 //@synthesize expectedModelVersion=_expectedModelVersion - In the implementation block
@property (nonatomic,readonly) NSArray * trainableLayers;                              //@synthesize trainableLayers=_trainableLayers - In the implementation block
@property (nonatomic,readonly) double validationSplit;                                 //@synthesize validationSplit=_validationSplit - In the implementation block
@property (nonatomic,readonly) NSString * eligibilityCheckIdentifier;                  //@synthesize eligibilityCheckIdentifier=_eligibilityCheckIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * eligiblityProbability;                       //@synthesize eligiblityProbability=_eligiblityProbability - In the implementation block
@property (nonatomic,readonly) NSString * metricsIdentifier;                           //@synthesize metricsIdentifier=_metricsIdentifier - In the implementation block
@property (nonatomic,readonly) double privatizationNormMax;                            //@synthesize privatizationNormMax=_privatizationNormMax - In the implementation block
@property (nonatomic,readonly) unsigned privatizationNormBinCount;                     //@synthesize privatizationNormBinCount=_privatizationNormBinCount - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
@property (nonatomic,readonly) NSURL * modelTemporaryURL;                              //@synthesize modelTemporaryURL=_modelTemporaryURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)taskId;
-(void)encodeWithCoder:(id)arg1 ;
-(MLModelConfiguration *)modelConfiguration;
-(void)setTaskId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelIdentifier;
-(id)initWithCKRecord:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(NSString *)metricsIdentifier;
-(id)initWithPFLTask:(id)arg1 ;
-(double)privatizationNormMax;
-(unsigned)privatizationNormBinCount;
-(int)expectedModelVersion;
-(NSArray *)trainableLayers;
-(double)validationSplit;
-(NSURL *)modelTemporaryURL;
-(NSString *)eligibilityCheckIdentifier;
-(NSNumber *)eligiblityProbability;
-(NSString *)dataProviderIdentifier;
-(id)initWithRawValues:(id)arg1 ;
-(void)setDataProviderIdentifier:(NSString *)arg1 ;
-(void)setExpectedModelVersion:(int)arg1 ;
@end

