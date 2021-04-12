/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
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
-(NSString *)inReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
-(void)setSupportedVersions:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)supportedVersionsCount;
-(unsigned)supportedVersionsAtIndex:(unsigned long long)arg1 ;
-(void)clearSupportedVersions;
-(void)addSupportedVersions:(unsigned)arg1 ;
-(unsigned*)supportedVersions;
@end

