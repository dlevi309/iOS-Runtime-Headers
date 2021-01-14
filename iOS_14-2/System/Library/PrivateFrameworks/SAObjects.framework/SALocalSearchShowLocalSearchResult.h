/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate, NSData;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSData * rawData; 
+(id)showLocalSearchResult;
+(id)showLocalSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
@end

