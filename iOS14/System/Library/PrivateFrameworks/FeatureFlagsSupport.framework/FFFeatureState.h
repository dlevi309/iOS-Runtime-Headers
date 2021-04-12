/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
*/


@class NSDictionary, NSString;

@interface FFFeatureState : NSObject {

	BOOL _hidden;
	NSDictionary* _attributes;
	NSString* _domain;
	NSString* _feature;
	long long _value;

}

@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * feature;                     //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hidden;                            //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long value;                        //@synthesize value=_value - In the implementation block
-(NSString *)feature;
-(BOOL)hidden;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setValue:(long long)arg1 ;
-(NSDictionary *)attributes;
-(id)description;
-(long long)value;
-(void)setFeature:(NSString *)arg1 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 hidden:(BOOL)arg4 attributes:(id)arg5 ;
-(id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 ;
@end

