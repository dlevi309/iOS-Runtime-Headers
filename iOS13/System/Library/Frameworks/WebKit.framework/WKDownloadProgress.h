/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSProgress.h>

@interface WKDownloadProgress : NSProgress {

	RetainPtr<NSURLSessionDownloadTask>* m_task;
	WeakPtr<WebKit::Download>* m_download;
	RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >* m_sandboxExtension;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)publish;
-(void)unpublish;
-(id)initWithDownloadTask:(id)arg1 download:(Download*)arg2 URL:(id)arg3 sandboxExtension:(RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >*)arg4 ;
-(void)performCancel;
@end

