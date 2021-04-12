/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, SFApp;

@interface SFAppTypicalUsage : NSManagedObject

@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSNumber * intervalType; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * wifiIN; 
@property (nonatomic,copy) NSNumber * wifiIN_M2; 
@property (nonatomic,copy) NSNumber * wifiIN_mean; 
@property (nonatomic,copy) NSNumber * wifiIN_var; 
@property (nonatomic,copy) NSNumber * wifiOUT; 
@property (nonatomic,copy) NSNumber * wifiOUT_M2; 
@property (nonatomic,copy) NSNumber * wifiOUT_mean; 
@property (nonatomic,copy) NSNumber * wifiOUT_var; 
@property (nonatomic,copy) NSNumber * wifiSampleCount; 
@property (nonatomic,copy) NSNumber * wiredIN; 
@property (nonatomic,copy) NSNumber * wiredIN_M2; 
@property (nonatomic,copy) NSNumber * wiredIN_mean; 
@property (nonatomic,copy) NSNumber * wiredIN_var; 
@property (nonatomic,copy) NSNumber * wiredOUT; 
@property (nonatomic,copy) NSNumber * wiredOUT_M2; 
@property (nonatomic,copy) NSNumber * wiredOUT_mean; 
@property (nonatomic,copy) NSNumber * wiredOUT_var; 
@property (nonatomic,copy) NSNumber * wiredSampleCount; 
@property (nonatomic,copy) NSNumber * wwanIN; 
@property (nonatomic,copy) NSNumber * wwanIN_M2; 
@property (nonatomic,copy) NSNumber * wwanIN_mean; 
@property (nonatomic,copy) NSNumber * wwanIN_var; 
@property (nonatomic,copy) NSNumber * wwanOUT; 
@property (nonatomic,copy) NSNumber * wwanOUT_M2; 
@property (nonatomic,copy) NSNumber * wwanOUT_mean; 
@property (nonatomic,copy) NSNumber * wwanOUT_var; 
@property (nonatomic,copy) NSNumber * wwanSampleCount; 
@property (nonatomic,retain) SFApp * hasApp; 
+(id)fetchRequest;
+(id)entityName;
@end

