/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLTaskDelegate.h>
#import <libobjc.A.dylib/PFLResumable.h>

@protocol PFLForegroundSessionDelegate, PFLDataSource;
@class NSDictionary, PFLNetworkResourceManager, NSMutableSet;

@interface PFLForegroundSession : NSObject <PFLTaskDelegate, PFLResumable> {

	BOOL _ignoreEligibilityCheck;
	id<PFLForegroundSessionDelegate> _delegate;
	NSDictionary* _identifierTodataSource;
	PFLNetworkResourceManager* _resourceManager;
	NSMutableSet* _runningTasks;
	id<PFLDataSource> _dataSource;

}

@property (nonatomic,readonly) NSDictionary * identifierTodataSource;                    //@synthesize identifierTodataSource=_identifierTodataSource - In the implementation block
@property (nonatomic,readonly) PFLNetworkResourceManager * resourceManager;              //@synthesize resourceManager=_resourceManager - In the implementation block
@property (nonatomic,readonly) NSMutableSet * runningTasks;                              //@synthesize runningTasks=_runningTasks - In the implementation block
@property (nonatomic,readonly) id<PFLDataSource> dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL ignoreEligibilityCheck;                              //@synthesize ignoreEligibilityCheck=_ignoreEligibilityCheck - In the implementation block
@property (__weak) id<PFLForegroundSessionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(void)suspend;
-(id<PFLForegroundSessionDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(id<PFLDataSource>)dataSource;
-(void)setDelegate:(id<PFLForegroundSessionDelegate>)arg1 ;
-(void)_finish;
-(PFLNetworkResourceManager *)resourceManager;
-(void)resume;
-(void)task:(id)arg1 didProgressToState:(unsigned long long)arg2 withError:(id)arg3 ;
-(BOOL)ignoreEligibilityCheck;
-(id)initWithDataSource:(id)arg1 networkResourceManager:(id)arg2 ignoreEligibilityCheck:(BOOL)arg3 ;
-(NSMutableSet *)runningTasks;
-(void)removeUnusedResourcesWithConfiguration:(id)arg1 ;
-(BOOL)isEligibleWithEligibilityIdentifier:(id)arg1 eligibilityProbability:(id)arg2 ;
-(id)initWithNetworkResourceManager:(id)arg1 dataSource:(id)arg2 ;
-(NSDictionary *)identifierTodataSource;
@end

