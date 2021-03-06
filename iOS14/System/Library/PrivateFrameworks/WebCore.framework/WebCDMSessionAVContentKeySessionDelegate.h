/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)invalidate;
-(id)initWithParent:(CDMSessionAVContentKeySession*)arg1 ;
@end

