/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)entityName;
+(id)fetchRequest;
@end

