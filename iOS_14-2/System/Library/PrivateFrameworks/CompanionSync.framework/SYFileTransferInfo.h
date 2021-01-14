/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYFileTransferInfo : PBCodable <NSCopying> {

	unsigned long long _decompressedFileSize;
	NSString* _endAnchor;
	SYMessageHeader* _header;
	NSString* _startAnchor;

}

@property (nonatomic,retain) SYMessageHeader * header;                             //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasStartAnchor; 
@property (nonatomic,retain) NSString * startAnchor;                               //@synthesize startAnchor=_startAnchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEndAnchor; 
@property (nonatomic,retain) NSString * endAnchor;                                 //@synthesize endAnchor=_endAnchor - In the implementation block
@property (assign,nonatomic) unsigned long long decompressedFileSize;              //@synthesize decompressedFileSize=_decompressedFileSize - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartAnchor:(NSString *)arg1 ;
-(void)setEndAnchor:(NSString *)arg1 ;
-(BOOL)hasStartAnchor;
-(BOOL)hasEndAnchor;
-(NSString *)startAnchor;
-(NSString *)endAnchor;
-(unsigned long long)decompressedFileSize;
-(void)setDecompressedFileSize:(unsigned long long)arg1 ;
@end

