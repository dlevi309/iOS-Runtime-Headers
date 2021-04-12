/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UINavigationController.h>

@class NSString, NSURL, CNContactViewController;

@interface _SFContactPreviewViewController : UINavigationController {

	NSString* _filePath;
	NSURL* _sourceURL;
	CNContactViewController* _contactViewController;
	/*^block*/id _beforeDismissHandler;
	BOOL _deleteFileWhenDone;

}
-(void)_done:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_presentActivityViewController:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 deleteFileWhenDone:(BOOL)arg3 beforeDismissHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

