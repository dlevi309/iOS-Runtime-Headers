/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, SFNetworkAttachment;

@interface SFLiveRoutePerf : NSManagedObject

@property (nonatomic,copy) NSNumber * adminDisables; 
@property (nonatomic,copy) NSNumber * bytesIn; 
@property (nonatomic,copy) NSNumber * bytesOut; 
@property (nonatomic,copy) NSNumber * captivityRedirects; 
@property (nonatomic,copy) NSNumber * certErrors; 
@property (nonatomic,copy) NSNumber * connAttempts; 
@property (nonatomic,copy) NSNumber * connSuccesses; 
@property (nonatomic,copy) NSNumber * dataStalls; 
@property (nonatomic,copy) NSNumber * epochs; 
@property (nonatomic,copy) NSNumber * faultyStay; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * lowLqmStay; 
@property (nonatomic,copy) NSNumber * lowqStay; 
@property (nonatomic,copy) NSNumber * lqmTransitionCount; 
@property (nonatomic,copy) NSNumber * overallStay; 
@property (nonatomic,copy) NSNumber * overallStayM2; 
@property (nonatomic,copy) NSNumber * packetsIn; 
@property (nonatomic,copy) NSNumber * packetsOut; 
@property (nonatomic,copy) NSNumber * reTxBytes; 
@property (nonatomic,copy) NSNumber * rttAvg; 
@property (nonatomic,copy) NSNumber * rttMin; 
@property (nonatomic,copy) NSNumber * rttVar; 
@property (nonatomic,copy) NSNumber * rxDupeBytes; 
@property (nonatomic,copy) NSNumber * rxOOOBytes; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * topDownloadRate; 
@property (nonatomic,retain) SFNetworkAttachment * hasNetworkAttachment; 
+(id)fetchRequest;
+(id)entityName;
@end

