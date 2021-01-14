/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoErrorDownloadingContentForMessageWarning : PBCodable <NSCopying> {

	NSString* _messageId;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMessageId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
@end

