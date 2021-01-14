/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setActivityShareURL:(NSString *)arg1 ;
-(void)setRelationshipShareURL:(NSString *)arg1 ;
-(BOOL)hasActivityShareURL;
-(BOOL)hasRelationshipShareURL;
-(NSString *)activityShareURL;
-(NSString *)relationshipShareURL;
@end

