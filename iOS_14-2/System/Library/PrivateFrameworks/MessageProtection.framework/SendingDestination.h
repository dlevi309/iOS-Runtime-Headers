/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface SendingDestination : NSManagedObject

@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,copy) NSDate * registrationDate; 
@property (assign,nonatomic) int validOutgoingCounter; 
+(id)fetchRequest;
@end

