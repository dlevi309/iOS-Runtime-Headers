/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <CoreData/NSManagedObject.h>

@class NSString, PDSCDUser;

@interface PDSCDRegistration : NSManagedObject

@property (nonatomic,copy) NSString * qualifier; 
@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,copy) NSString * clientID; 
@property (assign,nonatomic) short entryState; 
@property (assign,nonatomic) short environment; 
@property (nonatomic,retain) PDSCDUser * user; 
+(id)fetchRequest;
+(id)activeRegistrationsForClientID:(id)arg1 ;
+(id)pendingRegistrations;
+(id)activeRegistrations;
+(id)insertIntoManagedObjectContext:(id)arg1 ;
+(id)registrationFromEntry:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
+(id)registrationsWithState:(unsigned char)arg1 ;
+(id)uniquenessPredicateForEntry:(id)arg1 ;
+(id)registrationsForClientID:(id)arg1 ;
-(id)entryWithUserCache:(id)arg1 ;
@end

