/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSDictionary;


@protocol INGenericIntent <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
@required
-(NSString *)verb;
-(void)setVerb:(id)arg1;
-(void)setDomain:(id)arg1;
-(BOOL)isGenericIntent;
-(NSString *)domain;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(id)arg1;

@end

