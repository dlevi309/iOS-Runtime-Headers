/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoContentRequest : PBRequest <NSCopying> {

	unsigned _fullSyncVersion;
	NSString* _messageId;
	BOOL _highPriority;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;              //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                  //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasHighPriority; 
@property (assign,nonatomic) BOOL highPriority;                     //@synthesize highPriority=_highPriority - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMessageId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(id)description;
-(BOOL)highPriority;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setHasHighPriority:(BOOL)arg1 ;
-(BOOL)hasHighPriority;
@end

