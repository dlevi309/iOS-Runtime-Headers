/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

