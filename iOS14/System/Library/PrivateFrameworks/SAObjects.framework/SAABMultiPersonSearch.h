/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (nonatomic,copy) NSArray * personSearches; 
@property (nonatomic,copy) NSNumber * resultsLimit; 
+(id)multiPersonSearch;
+(id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setResultsLimit:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
-(NSArray *)personSearches;
-(void)setPersonSearches:(NSArray *)arg1 ;
-(NSNumber *)resultsLimit;
@end

