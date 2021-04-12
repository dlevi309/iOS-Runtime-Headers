/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAAlarmSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enabled;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setHour:(NSNumber *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSArray *)frequency;
-(void)setFrequency:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

