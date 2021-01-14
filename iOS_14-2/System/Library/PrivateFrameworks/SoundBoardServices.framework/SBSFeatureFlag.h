/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@class NSString, NSNumber, NSDictionary;

@interface SBSFeatureFlag : NSObject {

	NSString* _domain;
	NSString* _feature;
	NSNumber* _value;

}

@property (nonatomic,copy) NSString * domain;                                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * feature;                                       //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) NSNumber * value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)feature;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(void)setFeature:(NSString *)arg1 ;
-(id)initWith:(id)arg1 andFeature:(id)arg2 andValue:(id)arg3 ;
@end

