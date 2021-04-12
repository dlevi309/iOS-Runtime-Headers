/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogFeatureKey : MCAggregateLogKey {

	unsigned long long _type;
	NSString* _feature;
	NSString* _nameSuffix;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSString * nameSuffix;                //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(void)update;
+(id)trueFeature:(id)arg1 name:(id)arg2 ;
+(id)falseFeature:(id)arg1 name:(id)arg2 ;
+(id)valueFeature:(id)arg1 name:(id)arg2 ;
+(id)objectFeature:(id)arg1 name:(id)arg2 ;
+(id)intersectionFeature:(id)arg1 name:(id)arg2 ;
+(id)_feature:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 ;
+(id)trueFeature:(id)arg1 ;
+(id)falseFeature:(id)arg1 ;
+(id)valueFeature:(id)arg1 ;
+(id)objectFeature:(id)arg1 ;
+(id)intersectionFeature:(id)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
@end

