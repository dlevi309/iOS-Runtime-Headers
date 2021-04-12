/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_presentActivityViewController:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 deleteFileWhenDone:(BOOL)arg3 beforeDismissHandler:(/*^block*/id)arg4 ;
@end

