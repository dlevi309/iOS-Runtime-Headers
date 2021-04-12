/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSDictionary;


@protocol INGenericIntent <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
@required
-(NSString *)domain;
-(NSString *)verb;
-(void)setDomain:(id)arg1;
-(void)setVerb:(id)arg1;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(id)arg1;
-(BOOL)isGenericIntent;

@end

