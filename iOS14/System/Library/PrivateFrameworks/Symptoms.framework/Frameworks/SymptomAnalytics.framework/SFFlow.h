/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, NSSet, SFNetworkAttachment;

@interface SFFlow : NSManagedObject

@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSString * remoteID; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLivePerformance; 
@property (nonatomic,retain) SFNetworkAttachment * onNetwork; 
+(id)entityName;
+(id)fetchRequest;
@end

