/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString, NSArray;

@interface SAAnswerSearch : SADomainCommand

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * miscQuestion; 
@property (nonatomic,copy) NSString * placeAttribute; 
@property (nonatomic,copy) NSArray * product; 
@property (nonatomic,copy) NSString * timeQuestion; 
@property (nonatomic,copy) NSString * verbType; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)attribute;
-(void)setProduct:(NSArray *)arg1 ;
-(NSString *)verbType;
-(void)setAttribute:(NSString *)arg1 ;
-(SALocation *)address;
-(void)setAddress:(SALocation *)arg1 ;
-(NSArray *)product;
-(NSString *)miscQuestion;
-(void)setMiscQuestion:(NSString *)arg1 ;
-(NSString *)placeAttribute;
-(void)setPlaceAttribute:(NSString *)arg1 ;
-(NSString *)timeQuestion;
-(void)setTimeQuestion:(NSString *)arg1 ;
-(void)setVerbType:(NSString *)arg1 ;
@end

