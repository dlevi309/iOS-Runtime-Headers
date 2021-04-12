/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)loadNewArticle;
-(void)reloadArticle;
-(void)_initializeReaderJSControllerForFrame:(id)arg1 ;
-(id)isolatedWorldForNextPageDetection;
-(id)collectReaderContentFromPrintAndMailingFrame;
-(id)printingMailingFrame;
-(_SFWebProcessPlugInReaderEnabledPageController *)originalPageController;
-(void)setOriginalPageController:(_SFWebProcessPlugInReaderEnabledPageController *)arg1 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(OpaqueJSValueRef)originalArticleFinder;
-(void)setReaderIsActive:(BOOL)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3 ;
-(void)setConfiguration:(id)arg1 ;
@end

