/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _localizedDescription;

}

@property (copy) NSString * localizedDescription;                 //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;              //@synthesize PINFormat=_PINFormat - In the implementation block
@property (copy) NSData * APDUTemplate;                           //@synthesize APDUTemplate=_APDUTemplate - In the implementation block
@property (assign) long long PINByteOffset;                       //@synthesize PINByteOffset=_PINByteOffset - In the implementation block
@property (retain) TKSmartCard * smartCard;                       //@synthesize smartCard=_smartCard - In the implementation block
@property (copy) NSString * PIN;                                  //@synthesize PIN=_PIN - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)finishWithError:(id*)arg1 ;
-(NSString *)PIN;
-(void)setPIN:(NSString *)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setPINByteOffset:(long long)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(long long)PINByteOffset;
-(NSData *)APDUTemplate;
-(TKSmartCard *)smartCard;
-(void)setAPDUTemplate:(NSData *)arg1 ;
-(void)setSmartCard:(TKSmartCard *)arg1 ;
@end

