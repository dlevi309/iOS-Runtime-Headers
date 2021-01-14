/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP2 : PBCodable <NSCopying> {

	NSData* _padding;
	NSString* _threadIdentifier;
	unsigned _version;
	SCD_Struct_IM7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasThreadIdentifier; 
@property (nonatomic,retain) NSString * threadIdentifier;              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                         //@synthesize padding=_padding - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSString *)threadIdentifier;
-(BOOL)hasVersion;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(BOOL)hasThreadIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasPadding;
-(unsigned long long)hash;
-(NSData *)padding;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPadding:(NSData *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

