/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SASmsGroupSearch : SADomainCommand

@property (nonatomic,copy) NSString * smsGroupName; 
+(id)groupSearch;
+(id)groupSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)smsGroupName;
-(void)setSmsGroupName:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
@end

