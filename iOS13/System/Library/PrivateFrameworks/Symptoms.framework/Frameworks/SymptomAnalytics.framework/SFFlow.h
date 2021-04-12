/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)fetchRequest;
+(id)entityName;
@end

