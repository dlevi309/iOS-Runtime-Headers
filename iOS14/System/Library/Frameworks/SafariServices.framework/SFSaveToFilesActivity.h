/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIViewController* _presentedViewController;
	BOOL _supportsDownloads;

}

@property (assign,nonatomic) BOOL supportsDownloads;                //@synthesize supportsDownloads=_supportsDownloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg1 ;
-(id)customizationControllerForSaveToFilesOperation:(id)arg1 ;
-(BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)arg1 ;
-(BOOL)supportsDownloads;
-(id)activityType;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithActivityItemProviderCollection:(id)arg1 customizationController:(id)arg2 ;
-(void)setSupportsDownloads:(BOOL)arg1 ;
-(void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2 ;
@end

