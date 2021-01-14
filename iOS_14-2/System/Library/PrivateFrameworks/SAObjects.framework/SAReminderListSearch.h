/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, SAReminderTrigger;

@interface SAReminderListSearch : SADomainCommand

@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)listSearch;
+(id)listSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(id)groupIdentifier;
-(SAReminderTrigger *)trigger;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

