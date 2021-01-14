/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <ShareSheet/UIActivityViewController.h>
#import <libobjc.A.dylib/_SFActivityItemCustomizationDelegate.h>

@protocol _SFActivityViewControllerDelegate;
@class _SFPrintController, _SFActivityItemProviderCollection, NSArray, NSMutableSet, _SFSafariSharingExtensionController, _SFActivityItemCustomizationController, NSURL, NSString;

@interface _SFActivityViewController : UIActivityViewController <_SFActivityItemCustomizationDelegate> {

	_SFPrintController* _printController;
	_SFActivityItemProviderCollection* _itemProviderCollection;
	NSArray* _initialApplicationActivities;
	NSMutableSet* _activityTypesExcludedDueToSelectedCustomization;
	_SFSafariSharingExtensionController* _sharingExtensionController;
	id<_SFActivityViewControllerDelegate> _delegate;
	_SFActivityItemCustomizationController* _customizationController;
	NSURL* _sharingURL;
	NSArray* _activityItemProviders;
	NSString* _currentExtensionIdentifier;

}

@property (nonatomic,copy) NSString * currentExtensionIdentifier;                                                  //@synthesize currentExtensionIdentifier=_currentExtensionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) _SFSafariSharingExtensionController * sharingExtensionController;              //@synthesize sharingExtensionController=_sharingExtensionController - In the implementation block
@property (assign,nonatomic,__weak) id<_SFActivityViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _SFActivityItemCustomizationController * customizationController;                     //@synthesize customizationController=_customizationController - In the implementation block
@property (nonatomic,retain) NSURL * sharingURL;                                                                   //@synthesize sharingURL=_sharingURL - In the implementation block
@property (nonatomic,readonly) NSArray * activityItemProviders;                                                    //@synthesize activityItemProviders=_activityItemProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(/*^block*/id)arg2 ;
-(void)setCurrentExtensionIdentifier:(NSString *)arg1 ;
-(id)_extensionItemForExtensionActivity:(id)arg1 ;
-(id)_javaScriptProcessingFileURLInExtension:(id)arg1 ;
-(void)customizationControllerCustomizationsDidChange:(id)arg1 ;
-(id)initWithActivityItemProviderCollection:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4 ;
-(_SFSafariSharingExtensionController *)sharingExtensionController;
-(void)setSharingExtensionController:(_SFSafariSharingExtensionController *)arg1 ;
-(id<_SFActivityViewControllerDelegate>)delegate;
-(void)_updateActivityItems:(id)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(void)setDelegate:(id<_SFActivityViewControllerDelegate>)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4 ;
-(void)_updatePrintControllerWithActivityItems:(id)arg1 ;
-(void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(BOOL)arg3 ;
-(void)setCustomizationController:(_SFActivityItemCustomizationController *)arg1 ;
-(NSString *)currentExtensionIdentifier;
-(void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2 ;
-(BOOL)_containsProviderForDownloadActivityAndGetMIMEType:(id*)arg1 uti:(id*)arg2 ;
-(void)setSharingURL:(NSURL *)arg1 ;
-(NSURL *)sharingURL;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_executeActivity;
-(NSArray *)activityItemProviders;
-(void)prepareJavaScriptExtensionItemForActivity:(id)arg1 ;
-(void)_preparePrint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_SFActivityItemCustomizationController *)customizationController;
-(void)dealloc;
@end

