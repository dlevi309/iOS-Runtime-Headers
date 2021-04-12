/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)accountName;
-(SAReminderTrigger *)trigger;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

