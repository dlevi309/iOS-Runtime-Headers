/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPreviewItems:(id)arg1 ;
-(unsigned long long)presentationMode;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

