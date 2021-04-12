/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/

#import <ImageCaptureCore/ICDeviceManager.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class NSNetServiceBrowser, NSMutableArray, NSString;

@interface PTPCameraDeviceManager : ICDeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSNetServiceBrowser* _netServiceBrowser;
	NSMutableArray* _netServices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getFileDataImp:(id)arg1 ;
-(id)init;
-(void)deleteFileImp:(id)arg1 ;
-(void)registerDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2 ;
-(void)getFileMetadataImp:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)updateCameraFile:(id)arg1 withKeywords:(id)arg2 ;
-(void)startDeviceWithHandle:(id)arg1 ;
-(void)sendDevicePTPCommandImp:(id)arg1 ;
-(id)deviceManagerConnection;
-(void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(BOOL)arg3 ;
-(void)syncClockImp:(id)arg1 ;
-(long long)handleEvent:(id)arg1 onDevice:(id)arg2 contextInfo:(void*)arg3 ;
-(void)ejectImp:(id)arg1 ;
-(void)getFileThumbnailImp:(id)arg1 ;
-(void)updateCameraFolder:(id)arg1 withInfo:(id)arg2 ;
-(void)executeCompletionBlockWithErrorCode:(long long)arg1 info:(id)arg2 file:(id)arg3 completionDict:(id)arg4 completionBlk:(/*^block*/id)arg5 ;
-(long long)checkFile:(id)arg1 andDevice:(id)arg2 ;
-(void)handleEventImp:(id)arg1 ;
-(void)unregisterDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2 ;
-(void)updateCameraFile:(id)arg1 withInfo:(id)arg2 ;
-(void)notifyPTPEvent:(id)arg1 ;
-(void)notifyAddedItems:(id)arg1 ;
-(void)downloadFileImp:(id)arg1 ;
-(void)notifyContentCatalogPercentCompleted:(id)arg1 ;
-(void)dealloc;
@end

