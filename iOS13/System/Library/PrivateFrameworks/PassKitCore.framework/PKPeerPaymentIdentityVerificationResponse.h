/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAccount, NSString, NSArray;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse {

	BOOL _complete;
	BOOL _manuallyTriggered;
	PKPeerPaymentAccount* _account;
	NSString* _title;
	NSString* _subtitle;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSArray* _requiredFieldsByPage;
	NSArray* _acceptableDocuments;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,readonly) BOOL complete;                                      //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentAccount * account;                     //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                     //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;               //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredFieldsByPage;                //@synthesize requiredFieldsByPage=_requiredFieldsByPage - In the implementation block
@property (nonatomic,readonly) NSArray * acceptableDocuments;                      //@synthesize acceptableDocuments=_acceptableDocuments - In the implementation block
@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;              //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                  //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (assign,nonatomic) BOOL manuallyTriggered;                               //@synthesize manuallyTriggered=_manuallyTriggered - In the implementation block
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(PKPeerPaymentAccount *)account;
-(BOOL)complete;
-(NSString *)localizedTitle;
-(NSArray *)encryptionCertificates;
-(NSString *)encryptionVersion;
-(NSArray *)acceptableDocuments;
-(NSArray *)requiredFieldsByPage;
-(BOOL)manuallyTriggered;
-(void)setManuallyTriggered:(BOOL)arg1 ;
@end

