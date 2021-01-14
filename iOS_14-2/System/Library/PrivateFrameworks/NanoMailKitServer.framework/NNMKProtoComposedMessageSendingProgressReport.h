/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying> {

	NSString* _composedMessageId;
	int _progress;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasComposedMessageId; 
@property (nonatomic,retain) NSString * composedMessageId;              //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) BOOL hasProgress; 
@property (assign,nonatomic) int progress;                              //@synthesize progress=_progress - In the implementation block
-(id)dictionaryRepresentation;
-(int)progress;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setProgress:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProgress;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(BOOL)hasComposedMessageId;
-(NSString *)composedMessageId;
-(void)setHasProgress:(BOOL)arg1 ;
@end

