/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NGMPBP256Key : PBCodable <NSCopying> {

	NSData* _keyData;
	NSString* _keychainTag;
	int _keystore;

}

@property (nonatomic,readonly) BOOL hasKeychainTag; 
@property (nonatomic,retain) NSString * keychainTag;              //@synthesize keychainTag=_keychainTag - In the implementation block
@property (assign,nonatomic) int keystore;                        //@synthesize keystore=_keystore - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                    //@synthesize keyData=_keyData - In the implementation block
-(id)dictionaryRepresentation;
-(int)keystore;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKeyData;
-(id)description;
-(NSString *)keychainTag;
-(void)setKeystore:(int)arg1 ;
-(NSData *)keyData;
-(void)setKeychainTag:(NSString *)arg1 ;
-(int)StringAsKeystore:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setKeyData:(NSData *)arg1 ;
-(BOOL)hasKeychainTag;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)keystoreAsString:(int)arg1 ;
@end

