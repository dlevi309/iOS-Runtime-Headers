/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, SFApp;

@interface SFAppExperience : NSManagedObject

@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (assign,nonatomic) double algosScore; 
@property (assign,nonatomic) int algosSamples; 
@property (nonatomic,retain) SFApp * hasApp; 
+(id)entityName;
+(id)fetchRequest;
@end

