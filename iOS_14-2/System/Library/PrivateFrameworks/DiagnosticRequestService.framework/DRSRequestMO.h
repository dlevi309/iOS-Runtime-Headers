/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSData, NSDate, NSUUID;

@interface DRSRequestMO : NSManagedObject

@property (nonatomic,copy) NSString * build; 
@property (nonatomic,copy) NSNumber * cachedLogSize; 
@property (nonatomic,retain) NSData * contextDictionaryData; 
@property (assign,nonatomic) short decisionServerDecision; 
@property (nonatomic,copy) NSString * errorDescription; 
@property (assign,nonatomic) BOOL hasBeenCountedByTelemetry; 
@property (nonatomic,copy) NSString * issueCategory; 
@property (nonatomic,copy) NSString * issueDescription; 
@property (nonatomic,copy) NSString * logPath; 
@property (nonatomic,copy) NSDate * requestDate; 
@property (nonatomic,copy) NSUUID * requestID; 
@property (assign,nonatomic) long long requestMCT; 
@property (assign,nonatomic) long long requestState; 
@property (nonatomic,copy) NSString * teamID; 
@property (assign,nonatomic) short uploadAttemptCount; 
+(id)fetchRequest;
@end

