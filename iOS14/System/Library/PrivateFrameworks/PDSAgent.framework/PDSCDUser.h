/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PDSCDUser : NSManagedObject

@property (nonatomic,copy) NSString * userID; 
@property (assign,nonatomic) short userType; 
@property (nonatomic,retain) NSSet * registrations; 
+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg1 ;
+(id)userFromUser:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
+(id)predicateForUserID:(id)arg1 userType:(short)arg2 ;
-(id)user;
@end

