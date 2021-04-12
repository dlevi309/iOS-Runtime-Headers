/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString, NSData, NSArray;

@interface NPKPaymentBarcode : NSObject {

	NSString* _barcodeIdentifier;
	unsigned long long _state;
	NSData* _decryptedBarcodeCredential;
	NSArray* _barcodes;

}

@property (nonatomic,retain) NSString * barcodeIdentifier;                     //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (nonatomic,retain) NSData * decryptedBarcodeCredential;              //@synthesize decryptedBarcodeCredential=_decryptedBarcodeCredential - In the implementation block
@property (nonatomic,retain) NSArray * barcodes;                               //@synthesize barcodes=_barcodes - In the implementation block
@property (assign,nonatomic) unsigned long long state;                         //@synthesize state=_state - In the implementation block
-(id)description;
-(NSArray *)barcodes;
-(NSString *)barcodeIdentifier;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)decryptedBarcodeCredential;
-(id)initWithBarcodeIdentifier:(id)arg1 decryptedBarcodeCredential:(id)arg2 error:(id)arg3 ;
-(void)setDecryptedBarcodeCredential:(NSData *)arg1 ;
-(void)setBarcodes:(NSArray *)arg1 ;
@end

