/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDPeriodicScheduler.h>

@protocol _CDPeriodicScheduler <NSObject>
@required
-(void)registerJob:(id)arg1;
-(void)unregisterJob:(id)arg1;

@end


@class NSString;

@interface _CDPeriodicScheduler : NSObject <_CDPeriodicScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)updateExecutionCriteriaOnJob:(id)arg1 ;
-(void)registerJob:(id)arg1 ;
-(void)unregisterJob:(id)arg1 ;
@end

