/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface STUsageRequest : NSManagedObject

@property (nonatomic,retain) NSDate * acknowledgedDate; 
@property (nonatomic,retain) NSNumber * forUserDSID; 
@property (nonatomic,retain) NSDate * requestedDate; 
+(id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForLocalUsageRequests;
+(id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+(id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end

