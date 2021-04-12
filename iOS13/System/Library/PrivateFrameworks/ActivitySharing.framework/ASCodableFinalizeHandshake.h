/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCodableActivityDataPreview, NSString, ASCodableShareLocations;

@interface ASCodableFinalizeHandshake : PBCodable <NSCopying> {

	ASCodableActivityDataPreview* _activityDataPreview;
	NSString* _handshakeToken;
	ASCodableShareLocations* _inviterShareLocations;

}

@property (nonatomic,readonly) BOOL hasHandshakeToken; 
@property (nonatomic,retain) NSString * handshakeToken;                                       //@synthesize handshakeToken=_handshakeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterShareLocations; 
@property (nonatomic,retain) ASCodableShareLocations * inviterShareLocations;                 //@synthesize inviterShareLocations=_inviterShareLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityDataPreview; 
@property (nonatomic,retain) ASCodableActivityDataPreview * activityDataPreview;              //@synthesize activityDataPreview=_activityDataPreview - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHandshakeToken:(NSString *)arg1 ;
-(BOOL)hasHandshakeToken;
-(NSString *)handshakeToken;
-(void)setInviterShareLocations:(ASCodableShareLocations *)arg1 ;
-(void)setActivityDataPreview:(ASCodableActivityDataPreview *)arg1 ;
-(BOOL)hasInviterShareLocations;
-(BOOL)hasActivityDataPreview;
-(ASCodableShareLocations *)inviterShareLocations;
-(ASCodableActivityDataPreview *)activityDataPreview;
@end

