/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding> {

	BOOL _postFailsafeObliteration;
	BOOL _isCellularEnabled;
	long long _chipID;
	long long _pairingVersion;
	NSString* _productType;

}

@property (assign,nonatomic) long long chipID;                           //@synthesize chipID=_chipID - In the implementation block
@property (assign,nonatomic) long long pairingVersion;                   //@synthesize pairingVersion=_pairingVersion - In the implementation block
@property (nonatomic,retain) NSString * productType;                     //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) BOOL postFailsafeObliteration;              //@synthesize postFailsafeObliteration=_postFailsafeObliteration - In the implementation block
@property (assign,nonatomic) BOOL isCellularEnabled;                     //@synthesize isCellularEnabled=_isCellularEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productType;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)chipID;
-(void)setProductType:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setChipID:(long long)arg1 ;
-(long long)pairingVersion;
-(void)setPairingVersion:(long long)arg1 ;
-(BOOL)postFailsafeObliteration;
-(void)setPostFailsafeObliteration:(BOOL)arg1 ;
-(BOOL)isCellularEnabled;
-(void)setIsCellularEnabled:(BOOL)arg1 ;
@end

