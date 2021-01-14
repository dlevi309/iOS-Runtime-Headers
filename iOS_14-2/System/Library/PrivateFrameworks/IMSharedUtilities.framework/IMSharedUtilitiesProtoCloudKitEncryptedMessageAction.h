/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying> {

	long long _messageActionType;
	NSString* _originalMessageGuid;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                            //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasMessageActionType; 
@property (assign,nonatomic) long long messageActionType;                 //@synthesize messageActionType=_messageActionType - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;                      //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalMessageGuid; 
@property (nonatomic,retain) NSString * originalMessageGuid;              //@synthesize originalMessageGuid=_originalMessageGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                            //@synthesize padding=_padding - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(NSString *)otherHandle;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasOtherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(void)setOriginalMessageGuid:(NSString *)arg1 ;
-(void)setMessageActionType:(long long)arg1 ;
-(void)setHasMessageActionType:(BOOL)arg1 ;
-(long long)messageActionType;
-(BOOL)hasMessageActionType;
-(BOOL)hasOriginalMessageGuid;
-(NSString *)originalMessageGuid;
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

