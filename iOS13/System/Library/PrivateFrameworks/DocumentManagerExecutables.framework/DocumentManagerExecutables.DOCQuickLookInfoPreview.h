/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@interface DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController <QLPreviewControllerDataSource> {

	 item;
	 qlItem;

}

@property (readonly,nonatomic) unsigned long long presentationMode; 
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithPreviewItems:(id)arg1 ;
-(unsigned long long)presentationMode;
@end

