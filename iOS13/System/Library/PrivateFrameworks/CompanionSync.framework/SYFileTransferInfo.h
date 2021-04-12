/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(void)setStartAnchor:(NSString *)arg1 ;
-(void)setEndAnchor:(NSString *)arg1 ;
-(BOOL)hasStartAnchor;
-(BOOL)hasEndAnchor;
-(NSString *)startAnchor;
-(NSString *)endAnchor;
-(unsigned long long)decompressedFileSize;
-(void)setDecompressedFileSize:(unsigned long long)arg1 ;
@end

