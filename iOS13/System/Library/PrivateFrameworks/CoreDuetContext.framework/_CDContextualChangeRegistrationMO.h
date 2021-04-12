/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate;

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSData * properties; 
@property (nonatomic,retain) NSDate * creationDate; 
+(void)hydrateMO:(id)arg1 fromRegistration:(id)arg2 ;
+(id)materializedRegistrationFrom:(id)arg1 ;
@end

