/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, SFApp;

@interface SFAppCalendarUsage : NSManagedObject

@property (nonatomic,copy) NSNumber * dayOfWeek; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSNumber * tier1; 
@property (nonatomic,copy) NSNumber * tier2; 
@property (nonatomic,copy) NSNumber * tier3; 
@property (nonatomic,copy) NSNumber * tier4; 
@property (nonatomic,copy) NSNumber * tier5; 
@property (nonatomic,copy) NSNumber * timeOfDaySlot; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) SFApp * hasApp; 
@property (nonatomic,retain) SFApp * hintedBy; 
+(id)fetchRequest;
+(id)entityName;
@end

