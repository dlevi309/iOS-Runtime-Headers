/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRFieldPkgItem, NSData;

@interface BRFieldPkgLocalItem : PBCodable <NSCopying> {

	long long _fileID;
	long long _size;
	unsigned _generationID;
	BRFieldPkgItem* _item;
	NSData* _xattrs;
	SCD_Struct_BR3 _has;

}

@property (nonatomic,retain) BRFieldPkgItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long fileID;                   //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationID; 
@property (assign,nonatomic) unsigned generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasXattrs; 
@property (nonatomic,retain) NSData * xattrs;                    //@synthesize xattrs=_xattrs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)size;
-(BRFieldPkgItem *)item;
-(void)setItem:(BRFieldPkgItem *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)generationID;
-(void)setGenerationID:(unsigned)arg1 ;
-(long long)fileID;
-(void)setFileID:(long long)arg1 ;
-(BOOL)hasSize;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasGenerationID;
-(NSData *)xattrs;
-(void)setXattrs:(NSData *)arg1 ;
-(void)setHasGenerationID:(BOOL)arg1 ;
-(BOOL)hasXattrs;
@end

