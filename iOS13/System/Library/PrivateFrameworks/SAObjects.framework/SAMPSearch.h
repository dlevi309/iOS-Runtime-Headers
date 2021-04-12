/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(void)setConstraints:(NSArray *)arg1 ;
-(long long)maxResults;
-(void)setMaxResults:(long long)arg1 ;
-(id)encodedClassName;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)searchTypes;
-(BOOL)strict;
-(void)setStrict:(BOOL)arg1 ;
@end

