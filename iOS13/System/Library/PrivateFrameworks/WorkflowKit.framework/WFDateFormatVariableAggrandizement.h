/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic,readonly) NSString * dateStyle; 
@property (nonatomic,readonly) NSString * timeStyle; 
@property (nonatomic,readonly) NSString * relativeDateStyle; 
@property (nonatomic,readonly) NSString * customDateFormat; 
@property (nonatomic,readonly) BOOL includesTimeForISO8601; 
+(id)defaultAggrandizement;
-(NSString *)dateStyle;
-(NSString *)timeStyle;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 ;
-(id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(BOOL)arg5 ;
-(id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2 ;
-(id)initWithRelativeTimeStyle;
-(id)initWithISO8601DateStyleAndTime:(BOOL)arg1 ;
-(id)initWithRFC2822DateStyle;
-(id)initWithCustomDateFormat:(id)arg1 ;
-(NSString *)relativeDateStyle;
-(NSString *)customDateFormat;
-(BOOL)includesTimeForISO8601;
@end

