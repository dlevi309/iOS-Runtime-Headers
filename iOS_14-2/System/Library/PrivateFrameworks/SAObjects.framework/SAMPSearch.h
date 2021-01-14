/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSArray * searchTypes; 
@property (assign,nonatomic) BOOL strict; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(BOOL)strict;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(BOOL)mutatingCommand;
-(NSArray *)searchTypes;
-(void)setStrict:(BOOL)arg1 ;
@end

