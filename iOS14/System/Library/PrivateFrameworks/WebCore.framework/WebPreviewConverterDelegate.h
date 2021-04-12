/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebPreviewConverterDelegate : NSObject {

	WeakPtr<WebCore::PreviewPlatformDelegate, WTF::EmptyCounter>* _delegate;

}
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithDelegate:(PreviewPlatformDelegate*)arg1 ;
@end

