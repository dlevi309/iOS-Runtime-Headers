/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSSet, LiveUsage;

@interface Process : NSManagedObject

@property (nonatomic,copy) NSString * bundleName; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * procName; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLiveUsage; 
@property (nonatomic,retain) LiveUsage * hintLiveUsage; 
+(id)fetchRequest;
+(id)entityName;
@end

