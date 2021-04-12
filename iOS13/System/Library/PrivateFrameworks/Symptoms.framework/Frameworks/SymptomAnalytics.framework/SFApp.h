/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <SymptomAnalytics/Process.h>

@class NSSet, NSOrderedSet, SFAppCalendarUsage;

@interface SFApp : Process

@property (nonatomic,retain) NSSet * hasAppRun; 
@property (nonatomic,retain) NSSet * hasCalendarUsage; 
@property (nonatomic,retain) NSOrderedSet * hasTypicalUsage; 
@property (nonatomic,retain) SFAppCalendarUsage * hintCalendarUsage; 
+(id)fetchRequest;
+(id)entityName;
-(void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2 ;
@end

