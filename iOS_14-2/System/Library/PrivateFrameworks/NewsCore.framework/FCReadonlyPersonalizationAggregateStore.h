/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCReadonlyPersonalizationAggregateStore.h>

@protocol FCReadonlyPersonalizationAggregateStore <NSObject>
@required
-(id)baselineAggregateWithConfigurableValues:(id)arg1;
-(id)aggregatesForFeatures:(id)arg1;
-(void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;

@end


@protocol FCDerivedPersonalizationData;
@class NSMutableDictionary, NSString;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore> {

	id<FCDerivedPersonalizationData> _derivedPersonalizationData;
	NSMutableDictionary* _overrideAggregatesByFeatureKey;

}

@property (nonatomic,retain) id<FCDerivedPersonalizationData> derivedPersonalizationData;              //@synthesize derivedPersonalizationData=_derivedPersonalizationData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overrideAggregatesByFeatureKey;                     //@synthesize overrideAggregatesByFeatureKey=_overrideAggregatesByFeatureKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
-(id)init;
-(id)aggregatesForFeatures:(id)arg1 ;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData>)arg1 ;
-(id<FCDerivedPersonalizationData>)derivedPersonalizationData;
-(NSMutableDictionary *)overrideAggregatesByFeatureKey;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(BOOL)arg5 configurableValues:(id)arg6 ;
-(void)setOverrideAggregatesByFeatureKey:(NSMutableDictionary *)arg1 ;
-(void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7 ;
-(void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2 ;
-(id)initWithDerivedPersonalizationData:(id)arg1 ;
@end

