/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

