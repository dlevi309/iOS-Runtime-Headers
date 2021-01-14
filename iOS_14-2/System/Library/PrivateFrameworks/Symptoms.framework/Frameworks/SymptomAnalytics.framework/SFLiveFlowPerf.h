/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, SFFlow;

@interface SFLiveFlowPerf : NSManagedObject

@property (nonatomic,copy) NSNumber * connAttempts; 
@property (nonatomic,copy) NSNumber * connSuccesses; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * overallTime; 
@property (nonatomic,copy) NSString * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * timesThresholded; 
@property (nonatomic,copy) NSString * tmpID; 
@property (nonatomic,copy) NSNumber * txFailPackets; 
@property (nonatomic,copy) NSNumber * txPackets; 
@property (nonatomic,copy) NSNumber * txReTxInterval; 
@property (nonatomic,copy) NSNumber * txReTxPackets; 
@property (nonatomic,copy) NSNumber * usecsEstabTime; 
@property (nonatomic,retain) SFFlow * hasFlow; 
+(id)entityName;
+(id)fetchRequest;
@end

