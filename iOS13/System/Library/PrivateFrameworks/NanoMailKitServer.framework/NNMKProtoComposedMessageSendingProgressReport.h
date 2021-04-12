/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)progress;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProgress:(int)arg1 ;
-(void)setHasProgress:(BOOL)arg1 ;
-(BOOL)hasProgress;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(BOOL)hasComposedMessageId;
-(NSString *)composedMessageId;
@end

