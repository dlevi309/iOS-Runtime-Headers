/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

@class NSString, NSArray;


@protocol APPCPromotableContentDepiction
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) unsigned long long adjacentPosition; 
@property (readonly,nonatomic) long long placement; 
@property (readonly,nonatomic) NSString * language; 
@property (readonly,nonatomic) NSString * locale; 
@property (readonly,nonatomic) NSArray * searchTerms; 
@property (readonly,nonatomic) NSArray * keywords; 
@property (readonly,nonatomic) NSArray * categories; 
@required
-(long long)placement;
-(NSString *)locale;
-(NSArray *)keywords;
-(NSArray *)categories;
-(NSArray *)searchTerms;
-(NSString *)identifier;
-(NSString *)language;
-(unsigned long long)adjacentPosition;

@end

