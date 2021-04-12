/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying> {

	NSString* _activityShareURL;
	NSString* _relationshipShareURL;

}

@property (nonatomic,readonly) BOOL hasActivityShareURL; 
@property (nonatomic,retain) NSString * activityShareURL;                  //@synthesize activityShareURL=_activityShareURL - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationshipShareURL; 
@property (nonatomic,retain) NSString * relationshipShareURL;              //@synthesize relationshipShareURL=_relationshipShareURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActivityShareURL:(NSString *)arg1 ;
-(void)setRelationshipShareURL:(NSString *)arg1 ;
-(BOOL)hasActivityShareURL;
-(BOOL)hasRelationshipShareURL;
-(NSString *)activityShareURL;
-(NSString *)relationshipShareURL;
@end

