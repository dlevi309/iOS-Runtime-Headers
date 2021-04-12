/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@class NSString;

@interface WebCDMSessionAVContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {

	CDMSessionAVContentKeySession* m_parent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithParent:(CDMSessionAVContentKeySession*)arg1 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1 ;
@end

