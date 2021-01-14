/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL forcesMedusaAdoption; 
@property (nonatomic,readonly) BOOL ignoresDeclaredNetworkUsage; 
@property (nonatomic,readonly) BOOL shouldAllowScreenshotsInLoginWindow; 
@property (assign,nonatomic) NSString * bundleIdentifierToForceHomeAffordanceInset; 
@property (nonatomic,readonly) BOOL shouldAllowUseOfNonRecapPPT; 
@property (nonatomic,readonly) BOOL laserForLaunchPPT; 
@property (nonatomic,readonly) BOOL shouldShowInternalApplications; 
@property (nonatomic,readonly) BOOL shouldShowNonDefaultSystemApplications; 
-(void)setIgnoresDeclaredNetworkUsage:(BOOL)arg1 ;
-(BOOL)ignoresDeclaredNetworkUsage;
-(void)setShouldShowNonDefaultSystemApplications:(BOOL)arg1 ;
-(BOOL)shouldShowNonDefaultSystemApplications;
-(void)setShouldAllowScreenshotsInLoginWindow:(BOOL)arg1 ;
-(BOOL)shouldAllowScreenshotsInLoginWindow;
-(void)setBundleIdentifierToForceHomeAffordanceInset:(NSString *)arg1 ;
-(NSString *)bundleIdentifierToForceHomeAffordanceInset;
-(void)setShouldShowInternalApplications:(BOOL)arg1 ;
-(BOOL)shouldShowInternalApplications;
-(void)setLaserForLaunchPPT:(BOOL)arg1 ;
-(BOOL)laserForLaunchPPT;
-(void)setForcesMedusaAdoption:(BOOL)arg1 ;
-(BOOL)forcesMedusaAdoption;
-(void)setShouldAllowUseOfNonRecapPPT:(BOOL)arg1 ;
-(BOOL)shouldAllowUseOfNonRecapPPT;
-(void)_bindAndRegisterDefaults;
@end

