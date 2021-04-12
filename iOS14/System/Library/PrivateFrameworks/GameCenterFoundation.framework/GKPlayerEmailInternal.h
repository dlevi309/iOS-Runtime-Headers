/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation {

	NSString* _address;
	NSString* _addressSHA1;
	NSString* _addressPrefix;
	BOOL _verified;

}

@property (nonatomic,retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * addressSHA1;                //@synthesize addressSHA1=_addressSHA1 - In the implementation block
@property (nonatomic,retain) NSString * addressPrefix;              //@synthesize addressPrefix=_addressPrefix - In the implementation block
@property (assign,nonatomic) BOOL verified;                         //@synthesize verified=_verified - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)verified;
-(NSString *)address;
-(void)setVerified:(BOOL)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)addressPrefix;
-(NSString *)addressSHA1;
-(void)setAddressSHA1:(NSString *)arg1 ;
-(void)setAddressPrefix:(NSString *)arg1 ;
@end

