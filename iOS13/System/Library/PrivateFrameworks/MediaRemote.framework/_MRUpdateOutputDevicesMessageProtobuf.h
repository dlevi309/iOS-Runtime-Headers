/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _outputDevices;

}

@property (nonatomic,retain) NSMutableArray * outputDevices;              //@synthesize outputDevices=_outputDevices - In the implementation block
+(Class)outputDevicesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)outputDevices;
-(void)setOutputDevices:(NSMutableArray *)arg1 ;
-(void)addOutputDevices:(id)arg1 ;
-(unsigned long long)outputDevicesCount;
-(void)clearOutputDevices;
-(id)outputDevicesAtIndex:(unsigned long long)arg1 ;
@end

