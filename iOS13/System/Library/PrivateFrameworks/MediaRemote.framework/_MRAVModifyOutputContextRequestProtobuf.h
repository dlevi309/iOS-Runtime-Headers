/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _addingOutputDeviceUIDs;
	int _outputContextType;
	NSMutableArray* _removingOutputDeviceUIDs;
	NSMutableArray* _settingOutputDeviceUIDs;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasOutputContextType; 
@property (assign,nonatomic) int outputContextType;                                  //@synthesize outputContextType=_outputContextType - In the implementation block
@property (nonatomic,retain) NSMutableArray * addingOutputDeviceUIDs;                //@synthesize addingOutputDeviceUIDs=_addingOutputDeviceUIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * removingOutputDeviceUIDs;              //@synthesize removingOutputDeviceUIDs=_removingOutputDeviceUIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * settingOutputDeviceUIDs;               //@synthesize settingOutputDeviceUIDs=_settingOutputDeviceUIDs - In the implementation block
+(Class)addingOutputDeviceUIDType;
+(Class)removingOutputDeviceUIDType;
+(Class)settingOutputDeviceUIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)outputContextType;
-(void)setOutputContextType:(int)arg1 ;
-(void)setAddingOutputDeviceUIDs:(NSMutableArray *)arg1 ;
-(void)setRemovingOutputDeviceUIDs:(NSMutableArray *)arg1 ;
-(void)setSettingOutputDeviceUIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)addingOutputDeviceUIDs;
-(NSMutableArray *)removingOutputDeviceUIDs;
-(NSMutableArray *)settingOutputDeviceUIDs;
-(void)addAddingOutputDeviceUID:(id)arg1 ;
-(void)addRemovingOutputDeviceUID:(id)arg1 ;
-(void)addSettingOutputDeviceUID:(id)arg1 ;
-(unsigned long long)addingOutputDeviceUIDsCount;
-(void)clearAddingOutputDeviceUIDs;
-(id)addingOutputDeviceUIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)removingOutputDeviceUIDsCount;
-(void)clearRemovingOutputDeviceUIDs;
-(id)removingOutputDeviceUIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)settingOutputDeviceUIDsCount;
-(void)clearSettingOutputDeviceUIDs;
-(id)settingOutputDeviceUIDAtIndex:(unsigned long long)arg1 ;
-(void)setHasOutputContextType:(BOOL)arg1 ;
-(BOOL)hasOutputContextType;
-(id)outputContextTypeAsString:(int)arg1 ;
-(int)StringAsOutputContextType:(id)arg1 ;
@end

