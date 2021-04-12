/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, NSURL, LSApplicationProxy, NSOperation, UIPrintInteractionController;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity> {

	BOOL _isContentManaged;
	BOOL _shouldUnlinkFile;
	NSString* _sourceApplicationBundleID;
	NSURL* _url;
	NSString* _applicationIdentifier;
	LSApplicationProxy* _applicationProxy;
	NSOperation* _operation;
	UIPrintInteractionController* _printInteractionController;

}

@property (nonatomic,retain) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL shouldUnlinkFile;                                                  //@synthesize shouldUnlinkFile=_shouldUnlinkFile - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                                       //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                                  //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                                                //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isContentManaged;                                                  //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                     //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(id)bestJobNameForActivityItems:(id)arg1 ;
+(id)jobNameFormatForFile;
+(id)defaultJobName;
-(id)init;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(NSURL *)url;
-(id)activityType;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)isContentManaged;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_cleanup;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(long long)_defaultSortGroup;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(void)performActivity;
-(BOOL)_appIsDocumentTypeOwner;
-(UIPrintInteractionController *)printInteractionController;
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(id)_loadedApplicationProxy;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)_finishedCopyingResource:(BOOL)arg1 ;
-(BOOL)shouldUnlinkFile;
-(void)setShouldUnlinkFile:(BOOL)arg1 ;
-(void)_openDocumentWithApplication;
@end

