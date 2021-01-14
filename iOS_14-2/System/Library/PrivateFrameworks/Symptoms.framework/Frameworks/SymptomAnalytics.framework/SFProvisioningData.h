/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSDate;

@interface SFProvisioningData : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * map; 
@property (nonatomic,copy) NSNumber * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
+(id)entityName;
+(id)fetchRequest;
@end

