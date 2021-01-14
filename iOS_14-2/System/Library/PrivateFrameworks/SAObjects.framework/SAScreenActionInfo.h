/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSArray, NSURL;

@interface SAScreenActionInfo : SADomainObject

@property (nonatomic,copy) NSString * elementId; 
@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * semanticData; 
@property (nonatomic,copy) NSURL * semanticId; 
@property (nonatomic,copy) NSURL * type; 
@property (nonatomic,copy) NSString * value; 
+(id)info;
+(id)infoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)examples;
-(id)encodedClassName;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setExamples:(NSArray *)arg1 ;
-(void)setType:(NSURL *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSURL *)type;
-(NSString *)language;
-(NSString *)semanticData;
-(void)setSemanticData:(NSString *)arg1 ;
-(NSURL *)semanticId;
-(void)setSemanticId:(NSURL *)arg1 ;
-(NSString *)value;
-(NSString *)elementId;
-(void)setElementId:(NSString *)arg1 ;
@end

