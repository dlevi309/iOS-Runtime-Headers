/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoPassSyncStateManifestEntry : PBCodable <NSCopying> {

	NSString* _fileHash;
	NSString* _relativePath;

}

@property (nonatomic,retain) NSString * relativePath;              //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSString * fileHash;                  //@synthesize fileHash=_fileHash - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)fileHash;
-(NSString *)relativePath;
-(void)setFileHash:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

