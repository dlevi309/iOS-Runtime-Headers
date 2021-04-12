/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)supportedCommands;
-(void)setSupportedCommands:(NSMutableArray *)arg1 ;
-(void)addSupportedCommand:(id)arg1 ;
-(unsigned long long)supportedCommandsCount;
-(void)clearSupportedCommands;
-(id)supportedCommandAtIndex:(unsigned long long)arg1 ;
@end

