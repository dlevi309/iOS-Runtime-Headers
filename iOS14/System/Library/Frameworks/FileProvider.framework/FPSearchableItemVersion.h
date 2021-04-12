/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying> {

	NSData* _contentVersion;
	NSData* _metadataVersion;

}

@property (nonatomic,readonly) BOOL hasContentVersion; 
@property (nonatomic,retain) NSData * contentVersion;                //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataVersion; 
@property (nonatomic,retain) NSData * metadataVersion;               //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(id)stringFromVersion:(id)arg1 ;
+(id)versionFromString:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadataVersion:(NSData *)arg1 ;
-(NSData *)metadataVersion;
-(id)description;
-(unsigned long long)hash;
-(void)setContentVersion:(NSData *)arg1 ;
-(NSData *)contentVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasContentVersion;
-(BOOL)hasMetadataVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

