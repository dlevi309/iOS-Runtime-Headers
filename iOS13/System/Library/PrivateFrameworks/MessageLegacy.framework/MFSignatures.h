/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@interface MFSignatures : NSObject
+(id)sharedInstance;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)signaturePlainTextFormat:(id)arg1 ;
-(id)init;
-(id)signature;
-(void)setSignature:(id)arg1 ;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_getValue:(id)arg1 ;
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
@end

