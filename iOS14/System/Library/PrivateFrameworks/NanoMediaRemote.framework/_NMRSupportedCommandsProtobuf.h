/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRSupportedCommandsProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _supportedCommands;

}

@property (nonatomic,retain) NSMutableArray * supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
+(Class)supportedCommandType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)supportedCommands;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSupportedCommands:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addSupportedCommand:(id)arg1 ;
-(unsigned long long)supportedCommandsCount;
-(void)clearSupportedCommands;
-(id)supportedCommandAtIndex:(unsigned long long)arg1 ;
@end

