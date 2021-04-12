/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSProgress.h>

@interface WKDownloadProgress : NSProgress {

	RetainPtr<NSURLSessionDownloadTask>* m_task;
	WeakPtr<WebKit::Download, WTF::EmptyCounter>* m_download;
	RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >* m_sandboxExtension;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)unpublish;
-(void)publish;
-(void)performCancel;
-(id)initWithDownloadTask:(id)arg1 download:(Download*)arg2 URL:(id)arg3 sandboxExtension:(RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >*)arg4 ;
-(void)dealloc;
@end

