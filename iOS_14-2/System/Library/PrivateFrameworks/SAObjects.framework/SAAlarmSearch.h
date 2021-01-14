/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAAlarmSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSNumber * includesSleepAlarms; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)hour;
-(void)setFrequency:(NSArray *)arg1 ;
-(NSNumber *)enabled;
-(NSArray *)frequency;
-(void)setHour:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)minute;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSNumber *)includesSleepAlarms;
-(void)setIncludesSleepAlarms:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setIdentifier:(NSURL *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSURL *)identifier;
-(NSString *)label;
@end

