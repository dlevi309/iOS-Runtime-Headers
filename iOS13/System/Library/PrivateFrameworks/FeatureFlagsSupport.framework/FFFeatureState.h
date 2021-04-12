/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
*/


@class NSString;

@interface FFFeatureState : NSObject {

	NSString* _domain;
	NSString* _feature;
	long long _value;

}

@property (nonatomic,retain) NSString * domain;               //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * feature;              //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) long long value;                 //@synthesize value=_value - In the implementation block
-(id)description;
-(NSString *)domain;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 ;
@end

