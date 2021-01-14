/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface STUsageRequest : NSManagedObject

@property (nonatomic,retain) NSDate * acknowledgedDate; 
@property (nonatomic,retain) NSNumber * forUserDSID; 
@property (nonatomic,retain) NSDate * requestedDate; 
@property (assign,nonatomic) BOOL isBackgroundTask; 
+(id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForLocalUsageRequests;
+(id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+(id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end

