/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebPreviewConverterDelegate : NSObject {

	WeakPtr<WebCore::PreviewPlatformDelegate>* _delegate;

}
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithDelegate:(PreviewPlatformDelegate*)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
@end

