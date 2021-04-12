/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@protocol IXInitiatingOrUpdatingCoordinator;
@class NSString, IXAppInstallCoordinator, NSURL;

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver> {

	/*^block*/id _completion;
	NSString* _bundleID;
	IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> _coordinator;
	NSURL* _moveResultToURL;

}

@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSURL * moveResultToURL;                                                              //@synthesize moveResultToURL=_moveResultToURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setCoordinator:(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)arg1 ;
-(id)completion;
-(NSString *)bundleID;
-(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)coordinator;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
-(NSURL *)moveResultToURL;
-(void)setMoveResultToURL:(NSURL *)arg1 ;
@end

