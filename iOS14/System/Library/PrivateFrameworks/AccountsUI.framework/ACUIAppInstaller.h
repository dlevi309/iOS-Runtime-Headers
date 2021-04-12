/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/


@protocol ACUIAppInstallerDelegate;
@class ACUIAppDescription, NSDate, NSURL;

@interface ACUIAppInstaller : NSObject {

	ACUIAppDescription* _app;
	NSDate* _dateOfLastReachabilityCheck;
	BOOL _cachedReachabilityResult;
	NSDate* _dateOfLastInstallationCheck;
	BOOL _resultOfLastInstallationCheck;
	BOOL _needsAvailableInStoreCheck;
	BOOL _availableInStoreResult;
	NSURL* _publisherURL;
	id<ACUIAppInstallerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isInstalled; 
@property (nonatomic,retain) NSURL * publisherURL;                                                    //@synthesize publisherURL=_publisherURL - In the implementation block
@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL requiresReachabilityCheckToDetermineDownloadability; 
@property (nonatomic,readonly) BOOL isAvailableInStore; 
@property (assign,nonatomic,__weak) id<ACUIAppInstallerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
+(id)currentStoreFront;
-(id<ACUIAppInstallerDelegate>)delegate;
-(void)start;
-(BOOL)isInstalled;
-(void)setDelegate:(id<ACUIAppInstallerDelegate>)arg1 ;
-(BOOL)isDownloadable;
-(NSURL *)publisherURL;
-(BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg1 ;
-(void)_setCachedReachabilityResult:(BOOL)arg1 ;
-(BOOL)_isGreenTeaAvailable;
-(void)fetchDownloadability:(/*^block*/id)arg1 ;
-(void)_performReachabilityCheck:(/*^block*/id)arg1 ;
-(void)_setAvailableInStoreResult:(BOOL)arg1 ;
-(void)checkAvailabilityInStore:(/*^block*/id)arg1 ;
-(void)_performAvailabilityCheck:(/*^block*/id)arg1 ;
-(id)initForAppWithDescription:(id)arg1 ;
-(BOOL)requiresReachabilityCheckToDetermineDownloadability;
-(BOOL)isAvailableInStore;
-(void)setPublisherURL:(NSURL *)arg1 ;
@end

