/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <SymptomAnalytics/Process.h>

@class NSSet, NSOrderedSet, SFAppCalendarUsage;

@interface SFApp : Process

@property (nonatomic,retain) NSSet * hasAppDomainUsage; 
@property (nonatomic,retain) NSSet * hasAppExperience; 
@property (nonatomic,retain) NSSet * hasAppRun; 
@property (nonatomic,retain) NSSet * hasCalendarUsage; 
@property (nonatomic,retain) NSOrderedSet * hasTypicalUsage; 
@property (nonatomic,retain) SFAppCalendarUsage * hintCalendarUsage; 
+(id)entityName;
+(id)fetchRequest;
-(void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2 ;
@end

