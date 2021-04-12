/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCReadonlyPersonalizationAggregateStore.h>

@protocol FCReadonlyPersonalizationAggregateStore <NSObject>
@required
-(id)aggregatesForFeatures:(id)arg1;
-(id)baselineAggregateWithConfigurableValues:(id)arg1;
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
-(id)init;
-(id<FCDerivedPersonalizationData>)derivedPersonalizationData;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData>)arg1 ;
-(id)aggregatesForFeatures:(id)arg1 ;
-(NSMutableDictionary *)overrideAggregatesByFeatureKey;
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
-(void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7 ;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(BOOL)arg5 configurableValues:(id)arg6 ;
-(void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2 ;
-(id)initWithDerivedPersonalizationData:(id)arg1 ;
-(void)setOverrideAggregatesByFeatureKey:(NSMutableDictionary *)arg1 ;
@end

