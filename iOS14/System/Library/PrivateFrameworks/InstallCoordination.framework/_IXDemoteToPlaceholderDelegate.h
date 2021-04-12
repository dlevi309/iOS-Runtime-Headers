/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@class NSString, IXDemotingAppInstallCoordinator;

@interface _IXDemoteToPlaceholderDelegate : NSObject <IXAppInstallCoordinatorObserver> {

	NSString* _bundleID;
	/*^block*/id _completion;
	IXDemotingAppInstallCoordinator* _coordinator;

}

@property (nonatomic,copy) NSString * bundleID;                                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) IXDemotingAppInstallCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setCoordinator:(IXDemotingAppInstallCoordinator *)arg1 ;
-(id)completion;
-(NSString *)bundleID;
-(IXDemotingAppInstallCoordinator *)coordinator;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
@end

