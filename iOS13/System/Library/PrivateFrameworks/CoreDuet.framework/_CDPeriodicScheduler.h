/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)registerJob:(id)arg1 ;
-(void)unregisterJob:(id)arg1 ;
-(void)updateExecutionCriteriaOnJob:(id)arg1 ;
@end

