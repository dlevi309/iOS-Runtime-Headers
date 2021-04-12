/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVRMSAudioRouteMessage : PBCodable <NSCopying> {

	long long _macAddress;
	NSString* _displayName;
	BOOL _selected;
	BOOL _supportsVideo;
	SCD_Struct_TV1 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasMacAddress; 
@property (assign,nonatomic) long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVideo; 
@property (assign,nonatomic) BOOL supportsVideo;                  //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,nonatomic) BOOL hasSelected; 
@property (assign,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)macAddress;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)hasDisplayName;
-(BOOL)supportsVideo;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(void)setMacAddress:(long long)arg1 ;
-(BOOL)hasMacAddress;
-(void)setHasMacAddress:(BOOL)arg1 ;
-(void)setHasSupportsVideo:(BOOL)arg1 ;
-(BOOL)hasSupportsVideo;
-(void)setHasSelected:(BOOL)arg1 ;
-(BOOL)hasSelected;
@end

