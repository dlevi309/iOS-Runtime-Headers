/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAWebSiteSearch : SADomainCommand

@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * query; 
+(id)siteSearch;
+(id)siteSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setProvider:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)provider;
-(BOOL)requiresResponse;
-(void)setQuery:(NSString *)arg1 ;
@end

