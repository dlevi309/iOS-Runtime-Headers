/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/_SBDirectToAirPlayPolicyState.h>

@class NSString, NSSet;

@interface _SBMutableDirectToAirPlayPolicyState : _SBDirectToAirPlayPolicyState

@property (nonatomic,copy) NSString * routeName; 
@property (nonatomic,copy) NSSet * foregroundEligibleBundleIDs; 
@property (nonatomic,copy) NSSet * foregroundIneligibleBundleIDs; 
@property (nonatomic,copy) NSSet * foregroundReadyBundleIDs; 
@property (nonatomic,copy) NSSet * foregroundPlayingBundleIDs; 
@property (nonatomic,copy) NSSet * allForegroundBundleIDs; 
@property (nonatomic,copy) NSSet * allPlayingBundleIDs; 
@property (assign,nonatomic) BOOL currentRouteIsWired; 
@property (assign,nonatomic) BOOL playingAppIsActivelyPlaying; 
@property (assign,nonatomic) BOOL suppressReadyStateForLock; 
@property (assign,nonatomic) BOOL suppressStateChangesForObscured; 
@property (assign,nonatomic) unsigned long long policyStateSerialNumber; 
-(void)setRouteName:(NSString *)arg1 ;
-(void)setForegroundEligibleBundleIDs:(NSSet *)arg1 ;
-(void)setForegroundIneligibleBundleIDs:(NSSet *)arg1 ;
-(void)setForegroundReadyBundleIDs:(NSSet *)arg1 ;
-(void)setForegroundPlayingBundleIDs:(NSSet *)arg1 ;
-(void)setAllForegroundBundleIDs:(NSSet *)arg1 ;
-(void)setAllPlayingBundleIDs:(NSSet *)arg1 ;
-(void)setCurrentRouteIsWired:(BOOL)arg1 ;
-(void)setPlayingAppIsActivelyPlaying:(BOOL)arg1 ;
-(void)setSuppressReadyStateForLock:(BOOL)arg1 ;
-(void)setSuppressStateChangesForObscured:(BOOL)arg1 ;
-(void)setPolicyStateSerialNumber:(unsigned long long)arg1 ;
@end

