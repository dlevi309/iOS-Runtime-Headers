/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(BOOL)verified;
-(NSString *)addressPrefix;
-(NSString *)addressSHA1;
-(void)setAddressSHA1:(NSString *)arg1 ;
-(void)setAddressPrefix:(NSString *)arg1 ;
@end

