/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NWActivityMetricData, NSNumber;

@interface NWActivityFragment : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,retain) NWActivityMetricData * metricData; 
@property (nonatomic,copy) NSNumber * type; 
+(id)entityName;
@end

