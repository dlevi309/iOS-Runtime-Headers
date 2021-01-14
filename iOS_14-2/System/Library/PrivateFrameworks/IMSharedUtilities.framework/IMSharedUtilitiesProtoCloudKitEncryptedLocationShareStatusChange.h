/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable <NSCopying> {

	long long _shareDirection;
	long long _shareStatus;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM5 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasShareStatus; 
@property (assign,nonatomic) long long shareStatus;                 //@synthesize shareStatus=_shareStatus - In the implementation block
@property (assign,nonatomic) BOOL hasShareDirection; 
@property (assign,nonatomic) long long shareDirection;              //@synthesize shareDirection=_shareDirection - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;                //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                      //@synthesize padding=_padding - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(NSString *)otherHandle;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setShareStatus:(long long)arg1 ;
-(void)setHasShareStatus:(BOOL)arg1 ;
-(BOOL)hasShareStatus;
-(void)setShareDirection:(long long)arg1 ;
-(void)setHasShareDirection:(BOOL)arg1 ;
-(BOOL)hasShareDirection;
-(BOOL)hasOtherHandle;
-(long long)shareStatus;
-(long long)shareDirection;
-(void)setOtherHandle:(NSString *)arg1 ;
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

