/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)keyData;
-(int)keystore;
-(NSString *)keychainTag;
-(BOOL)hasKeyData;
-(BOOL)hasKeychainTag;
-(void)setKeychainTag:(NSString *)arg1 ;
-(void)setKeyData:(NSData *)arg1 ;
-(void)setKeystore:(int)arg1 ;
-(id)keystoreAsString:(int)arg1 ;
-(int)StringAsKeystore:(id)arg1 ;
@end

