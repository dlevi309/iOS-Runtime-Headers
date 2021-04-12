/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REFeature, NSArray;

@interface _REFeatureValuePair : NSObject {

	REFeature* _feature;
	unsigned long long _value;
	unsigned long long _index;
	NSArray* _rootFeatures;

}

@property (nonatomic,readonly) REFeature * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSArray * rootFeatures;                //@synthesize rootFeatures=_rootFeatures - In the implementation block
-(unsigned long long)index;
-(REFeature *)feature;
-(unsigned long long)hash;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)rootFeatures;
-(id)initWithFeature:(id)arg1 value:(unsigned long long)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4 ;
@end

