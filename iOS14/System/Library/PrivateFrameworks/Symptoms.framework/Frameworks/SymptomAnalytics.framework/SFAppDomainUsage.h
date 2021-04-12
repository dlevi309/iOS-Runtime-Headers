/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, SFApp;

@interface SFAppDomainUsage : NSManagedObject

@property (assign,nonatomic) int effectiveUserId; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * domainOwner; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * hits; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) SFApp * hasApp; 
+(id)entityName;
+(id)fetchRequest;
@end

