/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString, NSDictionary;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSString * lastSystemBuildVersion; 
@property (nonatomic,retain) NSString * lastRestoreIdentifier; 
@property (assign,nonatomic) BOOL hasCompletedSynchronizingCloudCriticalData; 
@property (assign,nonatomic) NSDictionary * bootTransitionContext; 
@property (nonatomic,readonly) BOOL dontLockAfterCrash; 
@property (nonatomic,readonly) BOOL recordBootTimeTillDidFinishLaunching; 
-(void)setDontLockAfterCrash:(BOOL)arg1 ;
-(BOOL)dontLockAfterCrash;
-(void)setBootTransitionContext:(NSDictionary *)arg1 ;
-(NSDictionary *)bootTransitionContext;
-(void)setLastSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)lastSystemBuildVersion;
-(void)setHasCompletedSynchronizingCloudCriticalData:(BOOL)arg1 ;
-(BOOL)hasCompletedSynchronizingCloudCriticalData;
-(void)setLastRestoreIdentifier:(NSString *)arg1 ;
-(NSString *)lastRestoreIdentifier;
-(void)setRecordBootTimeTillDidFinishLaunching:(BOOL)arg1 ;
-(BOOL)recordBootTimeTillDidFinishLaunching;
-(void)_bindAndRegisterDefaults;
@end

