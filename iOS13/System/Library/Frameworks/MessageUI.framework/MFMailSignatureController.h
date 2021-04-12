/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@interface MFMailSignatureController : NSObject
-(void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3 ;
-(void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDefaultSignatureForSender:(id)arg1 ;
-(id)_signatureStringForSender:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
@end

