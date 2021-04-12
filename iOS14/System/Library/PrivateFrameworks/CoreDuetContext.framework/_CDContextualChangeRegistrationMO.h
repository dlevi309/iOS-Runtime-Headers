/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate;

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSData * properties; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) BOOL isMultiDeviceRegistration; 
@property (assign,nonatomic) BOOL isActive; 
+(void)hydrateMO:(id)arg1 fromRegistration:(id)arg2 ;
+(id)predicateForActiveRegistrationsInBootSession:(id)arg1 ;
+(id)materializedRegistrationFrom:(id)arg1 ;
@end

