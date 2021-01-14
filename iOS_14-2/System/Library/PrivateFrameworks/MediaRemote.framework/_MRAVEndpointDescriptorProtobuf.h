/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAVOutputDeviceDescriptorProtobuf, NSString, NSMutableArray;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying> {

	int _connectionType;
	_MRAVOutputDeviceDescriptorProtobuf* _designatedGroupLeader;
	NSString* _instanceIdentifier;
	NSString* _name;
	NSMutableArray* _outputDevices;
	NSMutableArray* _personalOutputDevices;
	NSString* _uniqueIdentifier;
	BOOL _canModifyGroupMembership;
	BOOL _isLocalEndpoint;
	BOOL _isProxyGroupPlayer;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDevices;                                           //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) BOOL hasDesignatedGroupLeader; 
@property (nonatomic,retain) _MRAVOutputDeviceDescriptorProtobuf * designatedGroupLeader;              //@synthesize designatedGroupLeader=_designatedGroupLeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocalEndpoint; 
@property (assign,nonatomic) BOOL isLocalEndpoint;                                                     //@synthesize isLocalEndpoint=_isLocalEndpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                                            //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsProxyGroupPlayer; 
@property (assign,nonatomic) BOOL isProxyGroupPlayer;                                                  //@synthesize isProxyGroupPlayer=_isProxyGroupPlayer - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasCanModifyGroupMembership; 
@property (assign,nonatomic) BOOL canModifyGroupMembership;                                            //@synthesize canModifyGroupMembership=_canModifyGroupMembership - In the implementation block
@property (nonatomic,retain) NSMutableArray * personalOutputDevices;                                   //@synthesize personalOutputDevices=_personalOutputDevices - In the implementation block
+(Class)outputDevicesType;
+(Class)personalOutputDevicesType;
-(void)setOutputDevices:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasName;
-(int)connectionType;
-(BOOL)hasUniqueIdentifier;
-(void)setConnectionType:(int)arg1 ;
-(BOOL)isLocalEndpoint;
-(BOOL)hasIsProxyGroupPlayer;
-(BOOL)hasConnectionType;
-(NSString *)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIsProxyGroupPlayer:(BOOL)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(void)addOutputDevices:(id)arg1 ;
-(void)addPersonalOutputDevices:(id)arg1 ;
-(unsigned long long)outputDevicesCount;
-(void)clearOutputDevices;
-(id)outputDevicesAtIndex:(unsigned long long)arg1 ;
-(void)setDesignatedGroupLeader:(_MRAVOutputDeviceDescriptorProtobuf *)arg1 ;
-(unsigned long long)personalOutputDevicesCount;
-(void)clearPersonalOutputDevices;
-(id)personalOutputDevicesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDesignatedGroupLeader;
-(void)setIsLocalEndpoint:(BOOL)arg1 ;
-(void)setHasIsLocalEndpoint:(BOOL)arg1 ;
-(BOOL)hasIsLocalEndpoint;
-(BOOL)hasInstanceIdentifier;
-(void)setCanModifyGroupMembership:(BOOL)arg1 ;
-(void)setHasCanModifyGroupMembership:(BOOL)arg1 ;
-(BOOL)hasCanModifyGroupMembership;
-(void)setPersonalOutputDevices:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setIsProxyGroupPlayer:(BOOL)arg1 ;
-(id)connectionTypeAsString:(int)arg1 ;
-(NSMutableArray *)outputDevices;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)canModifyGroupMembership;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)personalOutputDevices;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_MRAVOutputDeviceDescriptorProtobuf *)designatedGroupLeader;
-(int)StringAsConnectionType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

