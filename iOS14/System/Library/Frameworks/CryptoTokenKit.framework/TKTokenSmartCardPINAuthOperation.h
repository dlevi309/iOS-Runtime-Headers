/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class TKSmartCardPINFormat, NSData, TKSmartCard, NSString;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation {

	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDUTemplate;
	long long _PINByteOffset;
	TKSmartCard* _smartCard;
	NSString* _PIN;
	NSString* _localizedPINLabel;

}

@property (copy) NSString * localizedPINLabel;                    //@synthesize localizedPINLabel=_localizedPINLabel - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;              //@synthesize PINFormat=_PINFormat - In the implementation block
@property (copy) NSData * APDUTemplate;                           //@synthesize APDUTemplate=_APDUTemplate - In the implementation block
@property (assign) long long PINByteOffset;                       //@synthesize PINByteOffset=_PINByteOffset - In the implementation block
@property (retain) TKSmartCard * smartCard;                       //@synthesize smartCard=_smartCard - In the implementation block
@property (copy) NSString * PIN;                                  //@synthesize PIN=_PIN - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)PIN;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)APDUTemplate;
-(NSString *)localizedPINLabel;
-(void)importOperation:(id)arg1 ;
-(Class)baseClassForUI;
-(void)setAPDUTemplate:(NSData *)arg1 ;
-(void)setSmartCard:(TKSmartCard *)arg1 ;
-(void)setLocalizedPINLabel:(NSString *)arg1 ;
-(TKSmartCard *)smartCard;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)finishWithError:(id*)arg1 ;
-(void)setPIN:(NSString *)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setPINByteOffset:(long long)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(long long)PINByteOffset;
@end

