/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface MLNeuralNetworksCompileTimeParams : NSObject <NSSecureCoding> {

	long long _lossType;
	long long _optimizerType;
	NSDictionary* _optimizerParameters;
	NSDictionary* _lossParameters;
	NSArray* _trainableLayerNames;
	NSDictionary* _updateParameters;

}

@property (assign,nonatomic) long long lossType;                              //@synthesize lossType=_lossType - In the implementation block
@property (assign,nonatomic) long long optimizerType;                         //@synthesize optimizerType=_optimizerType - In the implementation block
@property (nonatomic,retain) NSDictionary * optimizerParameters;              //@synthesize optimizerParameters=_optimizerParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * lossParameters;                   //@synthesize lossParameters=_lossParameters - In the implementation block
@property (nonatomic,retain) NSArray * trainableLayerNames;                   //@synthesize trainableLayerNames=_trainableLayerNames - In the implementation block
@property (nonatomic,retain) NSDictionary * updateParameters;                 //@synthesize updateParameters=_updateParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)lossType;
-(id)initWithLossType:(long long)arg1 optimizerType:(long long)arg2 optimizerParameters:(id)arg3 lossParameters:(id)arg4 trainableLayerNames:(id)arg5 updateParameters:(id)arg6 ;
-(BOOL)writeUpdatableParamsToURL:(id)arg1 error:(id*)arg2 ;
-(void)setLossType:(long long)arg1 ;
-(id)unarchiveUpdatableParamsAtURL:(id)arg1 error:(id*)arg2 ;
-(long long)optimizerType;
-(void)setOptimizerType:(long long)arg1 ;
-(NSDictionary *)optimizerParameters;
-(void)setOptimizerParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)lossParameters;
-(void)setLossParameters:(NSDictionary *)arg1 ;
-(NSArray *)trainableLayerNames;
-(void)setTrainableLayerNames:(NSArray *)arg1 ;
-(NSDictionary *)updateParameters;
-(id)initWithCoder:(id)arg1 ;
-(void)setUpdateParameters:(NSDictionary *)arg1 ;
@end

