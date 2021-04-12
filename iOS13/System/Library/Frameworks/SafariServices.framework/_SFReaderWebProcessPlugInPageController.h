/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFWebProcessPlugInPageController.h>

@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInReaderEnabledPageController;

@interface _SFReaderWebProcessPlugInPageController : _SFWebProcessPlugInPageController {

	unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController> >* _readerJSController;
	WKWebProcessPlugInScriptWorld* _isolatedWorldForNextPageDetection;
	_SFWebProcessPlugInReaderEnabledPageController* _originalPageController;

}

@property (assign,nonatomic,__weak) _SFWebProcessPlugInReaderEnabledPageController * originalPageController;              //@synthesize originalPageController=_originalPageController - In the implementation block
+(id)readerPageControllerForContextHandle:(id)arg1 ;
-(void)setConfiguration:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(OpaqueJSValueRef)originalArticleFinder;
-(void)_initializeReaderJSControllerForFrame:(id)arg1 ;
-(void)loadNewArticle;
-(void)reloadArticle;
-(void)setReaderIsActive:(BOOL)arg1 ;
-(id)isolatedWorldForNextPageDetection;
-(id)collectReaderContentFromPrintAndMailingFrame;
-(id)printingMailingFrame;
-(_SFWebProcessPlugInReaderEnabledPageController *)originalPageController;
-(void)setOriginalPageController:(_SFWebProcessPlugInReaderEnabledPageController *)arg1 ;
@end

