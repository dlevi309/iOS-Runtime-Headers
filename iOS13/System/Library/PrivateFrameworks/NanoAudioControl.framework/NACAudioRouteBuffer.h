/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACAudioRouteBuffer : PBCodable <NSCopying> {

	NSString* _routeName;
	int _routeType;
	NSString* _uniqueIdentifier;
	BOOL _picked;
	BOOL _supportsVolumeControl;
	SCD_Struct_NA3 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteName; 
@property (nonatomic,retain) NSString * routeName;                       //@synthesize routeName=_routeName - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVolumeControl; 
@property (assign,nonatomic) BOOL supportsVolumeControl;                 //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL hasPicked; 
@property (assign,nonatomic) BOOL picked;                                //@synthesize picked=_picked - In the implementation block
@property (assign,nonatomic) BOOL hasRouteType; 
@property (assign,nonatomic) int routeType;                              //@synthesize routeType=_routeType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(int)routeType;
-(void)setRouteType:(int)arg1 ;
-(void)setHasRouteType:(BOOL)arg1 ;
-(BOOL)hasRouteType;
-(id)routeTypeAsString:(int)arg1 ;
-(int)StringAsRouteType:(id)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)supportsVolumeControl;
-(BOOL)picked;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setHasSupportsVolumeControl:(BOOL)arg1 ;
-(BOOL)hasSupportsVolumeControl;
-(BOOL)hasRouteName;
-(void)setHasPicked:(BOOL)arg1 ;
-(BOOL)hasPicked;
@end

