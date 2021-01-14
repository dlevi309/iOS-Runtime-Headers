/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface MFSignatures : NSObject
+(id)sharedInstance;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)signaturePlainTextFormat:(id)arg1 ;
-(id)signature;
-(id)init;
-(id)_getValue:(id)arg1 ;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)defaultSignature;
-(id)signatureForAccount:(id)arg1 ;
-(BOOL)useAccountSignatures;
-(void)setSignature:(id)arg1 forAccount:(id)arg2 ;
-(id)signatureForSendingEmailAddress:(id)arg1 ;
-(void)clearSignature;
-(void)setUseAccountSignatures:(BOOL)arg1 ;
-(void)setSignature:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)signatureMarkupForSendingEmailAddress:(id)arg1 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg1 ;
-(void)setSignature:(id)arg1 ;
@end

