/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSAudioRouteMessage : PBCodable <NSCopying> {

	long long _macAddress;
	NSString* _displayName;
	BOOL _selected;
	BOOL _supportsVideo;
	SCD_Struct_RM5 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasMacAddress; 
@property (assign,nonatomic) long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVideo; 
@property (assign,nonatomic) BOOL supportsVideo;                  //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,nonatomic) BOOL hasSelected; 
@property (assign,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasMacAddress;
-(void)mergeFrom:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setMacAddress:(long long)arg1 ;
-(long long)macAddress;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)supportsVideo;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(void)setHasMacAddress:(BOOL)arg1 ;
-(void)setHasSupportsVideo:(BOOL)arg1 ;
-(BOOL)hasSupportsVideo;
-(void)setHasSelected:(BOOL)arg1 ;
-(BOOL)hasSelected;
@end

