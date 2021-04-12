/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSString, NSDictionary, NSArray, NSNumber;

@interface ADRecipe : NSObject {

	BOOL _isMissingRequiredData;
	NSString* _experimentID;
	NSDictionary* _translationMap;
	NSArray* _testWeights;
	NSNumber* _scalingRatio;

}

@property (nonatomic,retain) NSString * experimentID;                    //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSDictionary * translationMap;              //@synthesize translationMap=_translationMap - In the implementation block
@property (nonatomic,retain) NSArray * testWeights;                      //@synthesize testWeights=_testWeights - In the implementation block
@property (nonatomic,retain) NSNumber * scalingRatio;                    //@synthesize scalingRatio=_scalingRatio - In the implementation block
@property (assign,nonatomic) BOOL isMissingRequiredData;                 //@synthesize isMissingRequiredData=_isMissingRequiredData - In the implementation block
-(void)setExperimentID:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTranslationMap:(NSDictionary *)arg1 ;
-(NSDictionary *)translationMap;
-(NSString *)experimentID;
-(id)translationWeights:(id)arg1 ;
-(NSArray *)testWeights;
-(void)setTestWeights:(NSArray *)arg1 ;
-(NSNumber *)scalingRatio;
-(void)setScalingRatio:(NSNumber *)arg1 ;
-(BOOL)isMissingRequiredData;
-(void)setIsMissingRequiredData:(BOOL)arg1 ;
@end

