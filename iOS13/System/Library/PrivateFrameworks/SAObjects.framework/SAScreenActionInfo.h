/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)type;
-(void)setType:(NSURL *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)examples;
-(void)setExamples:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)elementId;
-(void)setElementId:(NSString *)arg1 ;
-(NSString *)semanticData;
-(void)setSemanticData:(NSString *)arg1 ;
-(NSURL *)semanticId;
-(void)setSemanticId:(NSURL *)arg1 ;
@end

