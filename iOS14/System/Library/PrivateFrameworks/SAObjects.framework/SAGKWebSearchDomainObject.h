/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (nonatomic,copy) NSArray * image; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSString * query; 
+(id)webSearchDomainObject;
+(id)webSearchDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(id)groupIdentifier;
-(void)setImage:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)image;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
@end

