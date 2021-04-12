/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/


@class HMHome, NSSet;

@interface HREStandardAsyncRecommendationGenerationProcess : NSObject {

	HMHome* _home;
	NSSet* _sourceItems;
	NSSet* _sourceActionObjects;
	unsigned long long _options;

}

@property (nonatomic,retain) HMHome * home;                            //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSSet * sourceItems;                      //@synthesize sourceItems=_sourceItems - In the implementation block
@property (nonatomic,retain) NSSet * sourceActionObjects;              //@synthesize sourceActionObjects=_sourceActionObjects - In the implementation block
@property (assign,nonatomic) unsigned long long options;               //@synthesize options=_options - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(NSSet *)sourceItems;
-(void)setSourceItems:(NSSet *)arg1 ;
-(NSSet *)sourceActionObjects;
-(void)setSourceActionObjects:(NSSet *)arg1 ;
-(BOOL)shouldGenerateRecommendations;
-(id)generateRecommendations;
-(id)initWithHome:(id)arg1 sourceItems:(id)arg2 options:(unsigned long long)arg3 ;
@end

