/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRUpdateActiveSystemEndpointMessageProtobuf : PBCodable <NSCopying> {

	int _changeType;
	int _operation;
	NSString* _outputDeviceUID;
	NSString* _reason;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL hasOutputDeviceUID; 
@property (nonatomic,retain) NSString * outputDeviceUID;              //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (assign,nonatomic) BOOL hasOperation; 
@property (assign,nonatomic) int operation;                           //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                          //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(int)changeType;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(BOOL)hasReason;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(BOOL)hasOutputDeviceUID;
-(NSString *)outputDeviceUID;
-(void)setHasOperation:(BOOL)arg1 ;
-(BOOL)hasOperation;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
@end

