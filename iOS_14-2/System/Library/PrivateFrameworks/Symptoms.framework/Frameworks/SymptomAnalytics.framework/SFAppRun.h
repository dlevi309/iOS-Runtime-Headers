/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, SFApp;

@interface SFAppRun : NSManagedObject

@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSDate * timeEnd; 
@property (nonatomic,copy) NSDate * timeStart; 
@property (nonatomic,copy) NSNumber * wifiIN_end; 
@property (nonatomic,copy) NSNumber * wifiIN_start; 
@property (nonatomic,copy) NSNumber * wifiOUT_end; 
@property (nonatomic,copy) NSNumber * wifiOUT_start; 
@property (nonatomic,copy) NSNumber * wiredIN_end; 
@property (nonatomic,copy) NSNumber * wiredIN_start; 
@property (nonatomic,copy) NSNumber * wiredOUT_end; 
@property (nonatomic,copy) NSNumber * wiredOUT_start; 
@property (nonatomic,copy) NSNumber * wwanIN_end; 
@property (nonatomic,copy) NSNumber * wwanIN_start; 
@property (nonatomic,copy) NSNumber * wwanOUT_end; 
@property (nonatomic,copy) NSNumber * wwanOUT_start; 
@property (nonatomic,retain) SFApp * hasApp; 
+(id)entityName;
+(id)fetchRequest;
@end

