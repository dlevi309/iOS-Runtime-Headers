/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {

	unsigned _counter;
	NSData* _debugInfo;
	NSData* _message;
	SCD_Struct_NG3 _has;

}

@property (nonatomic,retain) NSData * message;                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                 //@synthesize counter=_counter - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugInfo; 
@property (nonatomic,retain) NSData * debugInfo;               //@synthesize debugInfo=_debugInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)counter;
-(void)writeTo:(id)arg1 ;
-(NSData *)message;
-(void)setMessage:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)debugInfo;
-(void)setCounter:(unsigned)arg1 ;
-(void)setDebugInfo:(NSData *)arg1 ;
-(BOOL)hasCounter;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasDebugInfo;
@end

