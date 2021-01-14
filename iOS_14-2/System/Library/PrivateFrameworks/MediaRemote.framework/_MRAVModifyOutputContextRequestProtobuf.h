/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _addingOutputDeviceUIDs;
	NSMutableArray* _clusterAwareAddingOutputDeviceUIDs;
	NSMutableArray* _clusterAwareRemovingOutputDeviceUIDs;
	NSMutableArray* _clusterAwareSettingOutputDeviceUIDs;
	int _outputContextType;
	NSMutableArray* _removingOutputDeviceUIDs;
	NSMutableArray* _settingOutputDeviceUIDs;
	SCD_Struct_MR4 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

