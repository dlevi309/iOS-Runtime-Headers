/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, NSNumber;

@interface SACFPEXQuery : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * criteriaFields; 
@property (nonatomic,copy) NSString * criteriaSemanticTag; 
@property (nonatomic,copy) NSString * criteriaSubType; 
@property (nonatomic,copy) NSString * criteriaTimeType; 
@property (nonatomic,copy) NSString * criteriaType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * localeIdentifier; 
@property (nonatomic,copy) NSArray * people; 
@property (assign,nonatomic) long long queryLimit; 
@property (nonatomic,copy) NSNumber * queryTimeOut; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * socialLabelType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)query;
+(id)queryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)recipients;
-(NSString *)localeIdentifier;
-(id)groupIdentifier;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setPeople:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSArray *)criteriaFields;
-(void)setCriteriaFields:(NSArray *)arg1 ;
-(NSString *)criteriaSemanticTag;
-(void)setCriteriaSemanticTag:(NSString *)arg1 ;
-(NSString *)criteriaSubType;
-(void)setCriteriaSubType:(NSString *)arg1 ;
-(NSString *)criteriaTimeType;
-(void)setCriteriaTimeType:(NSString *)arg1 ;
-(NSString *)criteriaType;
-(void)setCriteriaType:(NSString *)arg1 ;
-(long long)queryLimit;
-(void)setQueryLimit:(long long)arg1 ;
-(NSNumber *)queryTimeOut;
-(void)setQueryTimeOut:(NSNumber *)arg1 ;
-(NSString *)socialLabelType;
-(void)setSocialLabelType:(NSString *)arg1 ;
-(NSArray *)people;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)label;
@end

