/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(id)_defaultPendingApplications;
-(void)setRemainingApplications:(NSArray *)arg1 ;
-(id)_defaultBlockingTasks;
-(void)setRemainingBlockingTasks:(NSDictionary *)arg1 ;
-(NSArray *)remainingApplications;
-(NSDictionary *)remainingBlockingTasks;
-(SBLogoutProgressTransientOverlayViewController *)logoutProgressTransientOverlayViewController;
-(void)setLogoutProgressTransientOverlayViewController:(SBLogoutProgressTransientOverlayViewController *)arg1 ;
@end

