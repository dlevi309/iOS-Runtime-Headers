/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@class NSString;

@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {

	AVContentKeySessionDelegateClient* _parent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2 ;
-(BOOL)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3 ;
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 externalProtectionStatusDidChangeForContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3 ;
-(void)contentKeySession:(id)arg1 contentProtectionSessionIdentifierDidChangeForReportGroup:(id)arg2 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequests:(id)arg2 forInitializationData:(id)arg3 ;
-(void)contentKeySession:(id)arg1 contentProtectionSessionIdentifierDidChangeForKeyGroup:(id)arg2 ;
-(void)invalidate;
-(id)initWithParent:(AVContentKeySessionDelegateClient*)arg1 ;
@end

