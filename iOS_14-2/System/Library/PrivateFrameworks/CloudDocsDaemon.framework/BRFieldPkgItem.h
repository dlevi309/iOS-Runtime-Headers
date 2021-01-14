/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface BRFieldPkgItem : PBCodable <NSCopying> {

	long long _mtime;
	long long _xattrIndex;
	NSString* _path;
	NSData* _quarantineInfo;
	NSData* _signature;
	NSString* _symlinkContent;
	int _type;
	BOOL _isExecutable;
	BOOL _isWritable;
	SCD_Struct_BR9 _has;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL hasMtime; 
@property (assign,nonatomic) long long mtime;                        //@synthesize mtime=_mtime - In the implementation block
@property (assign,nonatomic) BOOL hasIsWritable; 
@property (assign,nonatomic) BOOL isWritable;                        //@synthesize isWritable=_isWritable - In the implementation block
@property (assign,nonatomic) BOOL hasIsExecutable; 
@property (assign,nonatomic) BOOL isExecutable;                      //@synthesize isExecutable=_isExecutable - In the implementation block
@property (nonatomic,readonly) BOOL hasSymlinkContent; 
@property (nonatomic,retain) NSString * symlinkContent;              //@synthesize symlinkContent=_symlinkContent - In the implementation block
@property (nonatomic,readonly) BOOL hasQuarantineInfo; 
@property (nonatomic,retain) NSData * quarantineInfo;                //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasXattrIndex; 
@property (assign,nonatomic) long long xattrIndex;                   //@synthesize xattrIndex=_xattrIndex - In the implementation block
-(void)clear;
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasSignature;
-(long long)mtime;
-(void)setPath:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)path;
-(void)setType:(int)arg1 ;
-(BOOL)hasPath;
-(id)description;
-(BOOL)isWritable;
-(int)type;
-(unsigned long long)hash;
-(BOOL)isExecutable;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsWritable:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMtime:(long long)arg1 ;
-(NSData *)quarantineInfo;
-(void)setQuarantineInfo:(NSData *)arg1 ;
-(void)setSymlinkContent:(NSString *)arg1 ;
-(void)setHasMtime:(BOOL)arg1 ;
-(BOOL)hasMtime;
-(void)setHasIsWritable:(BOOL)arg1 ;
-(BOOL)hasIsWritable;
-(void)setIsExecutable:(BOOL)arg1 ;
-(void)setHasIsExecutable:(BOOL)arg1 ;
-(BOOL)hasIsExecutable;
-(BOOL)hasSymlinkContent;
-(BOOL)hasQuarantineInfo;
-(void)setXattrIndex:(long long)arg1 ;
-(void)setHasXattrIndex:(BOOL)arg1 ;
-(BOOL)hasXattrIndex;
-(NSString *)symlinkContent;
-(long long)xattrIndex;
-(void)updateWithPkgItem:(id)arg1 ;
-(id)initWithPkgItem:(id)arg1 ;
@end

