/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, Process;

@interface LiveUsage : NSManagedObject

@property (nonatomic,copy) NSNumber * allFlows; 
@property (nonatomic,copy) NSDate * billCycleEnd; 
@property (nonatomic,copy) NSNumber * jumboFlows; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * metadata; 
@property (nonatomic,copy) NSNumber * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * wifiIN; 
@property (nonatomic,copy) NSNumber * wifiOUT; 
@property (nonatomic,copy) NSNumber * wiredIN; 
@property (nonatomic,copy) NSNumber * wiredOUT; 
@property (nonatomic,copy) NSNumber * wwanIN; 
@property (nonatomic,copy) NSNumber * wwanOUT; 
@property (nonatomic,copy) NSNumber * xIN; 
@property (nonatomic,copy) NSNumber * xOUT; 
@property (nonatomic,retain) Process * hasProcess; 
@property (nonatomic,retain) Process * hintedBy; 
+(id)fetchRequest;
+(id)entityName;
@end

