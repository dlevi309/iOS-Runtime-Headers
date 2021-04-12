/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, ASCodableRelationshipContainer;

@interface ASCodableContact : PBCodable <NSCopying> {

	NSMutableArray* _destinations;
	NSString* _fullName;
	NSString* _linkedContactStoreIdentifier;
	ASCodableRelationshipContainer* _relationshipContainer;
	ASCodableRelationshipContainer* _remoteRelationshipContainer;
	NSString* _shortName;

}

@property (nonatomic,readonly) BOOL hasLinkedContactStoreIdentifier; 
@property (nonatomic,retain) NSString * linkedContactStoreIdentifier;                                   //@synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFullName; 
@property (nonatomic,retain) NSString * fullName;                                                       //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) BOOL hasShortName; 
@property (nonatomic,retain) NSString * shortName;                                                      //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;                                             //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationshipContainer; 
@property (nonatomic,retain) ASCodableRelationshipContainer * relationshipContainer;                    //@synthesize relationshipContainer=_relationshipContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteRelationshipContainer; 
@property (nonatomic,retain) ASCodableRelationshipContainer * remoteRelationshipContainer;              //@synthesize remoteRelationshipContainer=_remoteRelationshipContainer - In the implementation block
+(Class)destinationsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)destinations;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(NSString *)fullName;
-(unsigned long long)destinationsCount;
-(void)clearDestinations;
-(NSString *)shortName;
-(void)setFullName:(NSString *)arg1 ;
-(BOOL)hasFullName;
-(void)setShortName:(NSString *)arg1 ;
-(NSString *)linkedContactStoreIdentifier;
-(void)setLinkedContactStoreIdentifier:(NSString *)arg1 ;
-(void)setRelationshipContainer:(ASCodableRelationshipContainer *)arg1 ;
-(void)setRemoteRelationshipContainer:(ASCodableRelationshipContainer *)arg1 ;
-(ASCodableRelationshipContainer *)relationshipContainer;
-(ASCodableRelationshipContainer *)remoteRelationshipContainer;
-(void)addDestinations:(id)arg1 ;
-(id)destinationsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLinkedContactStoreIdentifier;
-(BOOL)hasShortName;
-(BOOL)hasRelationshipContainer;
-(BOOL)hasRemoteRelationshipContainer;
@end

