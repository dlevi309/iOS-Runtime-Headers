/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)entityName;
+(id)fetchRequest;
@end

