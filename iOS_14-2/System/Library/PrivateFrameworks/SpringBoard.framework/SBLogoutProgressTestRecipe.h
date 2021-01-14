/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBLogoutProgressDataSource.h>
#import <libobjc.A.dylib/SBTestRecipe.h>

@class NSMutableArray, SBLogoutProgressTransientOverlayViewController, NSArray, NSDictionary, NSString;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe> {

	NSMutableArray* _tasks;
	SBLogoutProgressTransientOverlayViewController* _logoutProgressTransientOverlayViewController;
	NSArray* _remainingApplications;
	NSDictionary* _remainingBlockingTasks;

}

@property (nonatomic,retain) SBLogoutProgressTransientOverlayViewController * logoutProgressTransientOverlayViewController;              //@synthesize logoutProgressTransientOverlayViewController=_logoutProgressTransientOverlayViewController - In the implementation block
@property (nonatomic,copy) NSArray * remainingApplications;                                                                              //@synthesize remainingApplications=_remainingApplications - In the implementation block
@property (nonatomic,retain) NSDictionary * remainingBlockingTasks;                                                                      //@synthesize remainingBlockingTasks=_remainingBlockingTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_defaultPendingApplications;
-(void)setRemainingApplications:(NSArray *)arg1 ;
-(id)_defaultBlockingTasks;
-(void)setRemainingBlockingTasks:(NSDictionary *)arg1 ;
-(NSArray *)remainingApplications;
-(NSDictionary *)remainingBlockingTasks;
-(SBLogoutProgressTransientOverlayViewController *)logoutProgressTransientOverlayViewController;
-(void)setLogoutProgressTransientOverlayViewController:(SBLogoutProgressTransientOverlayViewController *)arg1 ;
@end

