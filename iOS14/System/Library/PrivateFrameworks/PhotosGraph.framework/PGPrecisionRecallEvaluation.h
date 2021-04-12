/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGPrecisionRecallEvaluation : NSObject {

	unsigned long long _truePositives;
	unsigned long long _falsePositives;
	unsigned long long _falseNegatives;
	unsigned long long _trueNegatives;
	NSString* _identifier;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long falseNegatives;              //@synthesize falseNegatives=_falseNegatives - In the implementation block
@property (nonatomic,readonly) unsigned long long falsePositives;              //@synthesize falsePositives=_falsePositives - In the implementation block
@property (nonatomic,readonly) unsigned long long trueNegatives;               //@synthesize trueNegatives=_trueNegatives - In the implementation block
@property (nonatomic,readonly) unsigned long long truePositives;               //@synthesize truePositives=_truePositives - In the implementation block
-(double)precision;
-(NSString *)category;
-(double)recall;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 category:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 category:(id)arg2 truePositives:(unsigned long long)arg3 falsePositives:(unsigned long long)arg4 falseNegatives:(unsigned long long)arg5 trueNegatives:(unsigned long long)arg6 ;
-(void)evaluateWithGroundTruthResults:(id)arg1 andInferenceResults:(id)arg2 ;
-(void)evaluateWithGroundTruthResult:(BOOL)arg1 andInferenceResult:(BOOL)arg2 ;
-(id)csvHeader;
-(double)fMeasure;
-(double)fMeasure:(double)arg1 ;
-(unsigned long long)truePositives;
-(unsigned long long)falsePositives;
-(unsigned long long)falseNegatives;
-(unsigned long long)trueNegatives;
@end

