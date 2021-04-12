/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _outputDeviceUIDs;

}

@property (nonatomic,retain) NSMutableArray * outputDeviceUIDs;              //@synthesize outputDeviceUIDs=_outputDeviceUIDs - In the implementation block
+(Class)outputDeviceUIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOutputDeviceUIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputDeviceUIDs;
-(void)addOutputDeviceUIDs:(id)arg1 ;
-(unsigned long long)outputDeviceUIDsCount;
-(void)clearOutputDeviceUIDs;
-(id)outputDeviceUIDsAtIndex:(unsigned long long)arg1 ;
@end

