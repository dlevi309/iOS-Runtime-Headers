/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVContentKeySessionDelegate <NSObject>
@optional
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
-(void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
-(BOOL)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
-(void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
-(void)contentKeySessionDidGenerateExpiredSessionReport:(id)arg1;

@required
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;

@end

