/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding> {

	BOOL _postFailsafeObliteration;
	long long _chipID;
	NSString* _productType;

}

@property (assign,nonatomic) long long chipID;                           //@synthesize chipID=_chipID - In the implementation block
@property (nonatomic,retain) NSString * productType;                     //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) BOOL postFailsafeObliteration;              //@synthesize postFailsafeObliteration=_postFailsafeObliteration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(long long)chipID;
-(void)setChipID:(long long)arg1 ;
-(BOOL)postFailsafeObliteration;
-(void)setPostFailsafeObliteration:(BOOL)arg1 ;
@end

