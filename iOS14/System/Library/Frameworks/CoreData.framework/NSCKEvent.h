/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSDate, NSString;

@interface NSCKEvent : NSManagedObject

@property (nonatomic,retain) NSUUID * eventIdentifier; 
@property (assign,nonatomic) long long cloudKitEventType; 
@property (nonatomic,retain) NSDate * startedAt; 
@property (nonatomic,retain) NSDate * endedAt; 
@property (assign,nonatomic) BOOL succeeded; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) long long errorCode; 
@property (assign,nonatomic) long long countAffectedObjects; 
@property (assign,nonatomic) long long countFinishedObjects; 
+(id)finishEventForResult:(id)arg1 withMonitor:(id)arg2 error:(id*)arg3 ;
+(id)fetchExistingEventWithIdentifier:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(long long)eventTypeForRequest:(id)arg1 ;
+(id)beginEventForRequest:(id)arg1 withMonitor:(id)arg2 error:(id*)arg3 ;
+(id)entityPath;
@end

