/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {

	unsigned _counter;
	NSData* _debugInfo;
	NSData* _ktGossipData;
	NSData* _message;
	SCD_Struct_NG3 _has;

}

@property (nonatomic,retain) NSData * message;                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                    //@synthesize counter=_counter - In the implementation block
@property (nonatomic,readonly) BOOL hasKtGossipData; 
@property (nonatomic,retain) NSData * ktGossipData;               //@synthesize ktGossipData=_ktGossipData - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugInfo; 
@property (nonatomic,retain) NSData * debugInfo;                  //@synthesize debugInfo=_debugInfo - In the implementation block
-(void)setMessage:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)message;
-(void)setDebugInfo:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)attributes;
-(unsigned)counter;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCounter:(unsigned)arg1 ;
-(NSData *)debugInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setKtGossipData:(NSData *)arg1 ;
-(BOOL)hasKtGossipData;
-(NSData *)ktGossipData;
-(BOOL)hasCounter;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasDebugInfo;
@end

