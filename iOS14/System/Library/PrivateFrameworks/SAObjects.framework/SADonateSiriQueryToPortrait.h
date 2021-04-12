/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * originalQuery; 
@property (nonatomic,copy) NSString * qid; 
@property (assign,nonatomic) long long rank; 
@property (assign,nonatomic) double rankerConfidence; 
+(id)donateSiriQueryToPortrait;
+(id)donateSiriQueryToPortraitWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)qid;
-(void)setRank:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setQid:(NSString *)arg1 ;
-(long long)rank;
-(NSString *)originalQuery;
-(void)setOriginalQuery:(NSString *)arg1 ;
-(double)rankerConfidence;
-(void)setRankerConfidence:(double)arg1 ;
@end

