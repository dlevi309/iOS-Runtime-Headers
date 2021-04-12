/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSDate;

@interface SFProvisioningData : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * map; 
@property (nonatomic,copy) NSNumber * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
+(id)fetchRequest;
+(id)entityName;
@end

