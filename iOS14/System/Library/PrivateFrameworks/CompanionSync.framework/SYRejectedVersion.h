/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSString;

@interface SYRejectedVersion : PBCodable <NSCopying> {

	SCD_Struct_SY10* _supportedVersions;
	SYMessageHeader* _header;
	NSString* _inReplyTo;

}

@property (nonatomic,retain) SYMessageHeader * header;                                 //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * inReplyTo;                                     //@synthesize inReplyTo=_inReplyTo - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedVersionsCount; 
@property (nonatomic,readonly) unsigned* supportedVersions; 
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)inReplyTo;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setInReplyTo:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSupportedVersions:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)supportedVersionsCount;
-(unsigned)supportedVersionsAtIndex:(unsigned long long)arg1 ;
-(void)clearSupportedVersions;
-(void)addSupportedVersions:(unsigned)arg1 ;
-(unsigned*)supportedVersions;
@end

