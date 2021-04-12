/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(id)groupIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(void)setDomain:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)qid;
-(BOOL)requiresResponse;
-(NSString *)originalQuery;
-(void)setOriginalQuery:(NSString *)arg1 ;
-(void)setQid:(NSString *)arg1 ;
-(double)rankerConfidence;
-(void)setRankerConfidence:(double)arg1 ;
@end

