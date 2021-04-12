/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate, NSUUID;

@interface DRSEnableDataGatheringQueryMO : NSManagedObject

@property (assign,nonatomic) short attemptCount; 
@property (nonatomic,copy) NSString * build; 
@property (nonatomic,retain) NSData * contextDictionaryData; 
@property (assign,nonatomic) BOOL isContinue; 
@property (nonatomic,copy) NSString * issueCategory; 
@property (nonatomic,copy) NSString * logType; 
@property (nonatomic,copy) NSDate * queryDate; 
@property (nonatomic,copy) NSUUID * queryID; 
@property (nonatomic,copy) NSString * rejectionReason; 
@property (assign,nonatomic) short response; 
@property (nonatomic,copy) NSString * teamID; 
+(id)fetchRequest;
@end

