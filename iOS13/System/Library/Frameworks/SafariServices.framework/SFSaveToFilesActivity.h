/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivity.h>
#import <libobjc.A.dylib/_SFSaveToFilesOperationDelegate.h>

@class _SFSaveToFilesOperation, UIViewController, _SFActivityItemCustomizationController, NSString;

@interface SFSaveToFilesActivity : _SFActivity <_SFSaveToFilesOperationDelegate> {

	_SFSaveToFilesOperation* _operation;
	UIViewController* _presenterViewController;
	/*^block*/id _presentationCompletionHandler;
	BOOL _presentAnimated;
	_SFActivityItemCustomizationController* _customizationController;
	BOOL _supportsDownloads;

}

@property (assign,nonatomic) BOOL supportsDownloads;                //@synthesize supportsDownloads=_supportsDownloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(id)activityViewController;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithActivityItemProviderCollection:(id)arg1 customizationController:(id)arg2 ;
-(void)setSupportsDownloads:(BOOL)arg1 ;
-(void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2 ;
-(void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg1 ;
-(id)customizationControllerForSaveToFilesOperation:(id)arg1 ;
-(BOOL)supportsDownloads;
@end

