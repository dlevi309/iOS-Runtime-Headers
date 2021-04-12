/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface SGDCKInteractionInfo : PBCodable <NSCopying> {

	NSString* _intentResponseUserActivityString;
	NSString* _interactionBundleId;
	NSString* _interactionGroupId;
	NSString* _interactionId;
	NSString* _interactionTeamId;
	NSData* _reservationContainerReference;
	NSData* _reservationItemReferences;

}

@property (nonatomic,readonly) BOOL hasInteractionId; 
@property (nonatomic,retain) NSString * interactionId;                                 //@synthesize interactionId=_interactionId - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionGroupId; 
@property (nonatomic,retain) NSString * interactionGroupId;                            //@synthesize interactionGroupId=_interactionGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionBundleId; 
@property (nonatomic,retain) NSString * interactionBundleId;                           //@synthesize interactionBundleId=_interactionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReservationItemReferences; 
@property (nonatomic,retain) NSData * reservationItemReferences;                       //@synthesize reservationItemReferences=_reservationItemReferences - In the implementation block
@property (nonatomic,readonly) BOOL hasReservationContainerReference; 
@property (nonatomic,retain) NSData * reservationContainerReference;                   //@synthesize reservationContainerReference=_reservationContainerReference - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentResponseUserActivityString; 
@property (nonatomic,retain) NSString * intentResponseUserActivityString;              //@synthesize intentResponseUserActivityString=_intentResponseUserActivityString - In the implementation block
@property (nonatomic,readonly) BOOL hasInteractionTeamId; 
@property (nonatomic,retain) NSString * interactionTeamId;                             //@synthesize interactionTeamId=_interactionTeamId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setReservationContainerReference:(NSData *)arg1 ;
-(BOOL)hasReservationContainerReference;
-(void)setReservationItemReferences:(NSData *)arg1 ;
-(NSString *)intentResponseUserActivityString;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)reservationItemReferences;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)reservationContainerReference;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasInteractionId;
-(BOOL)hasInteractionGroupId;
-(BOOL)hasInteractionBundleId;
-(BOOL)hasReservationItemReferences;
-(BOOL)hasIntentResponseUserActivityString;
-(BOOL)hasInteractionTeamId;
-(NSString *)interactionGroupId;
-(void)setInteractionGroupId:(NSString *)arg1 ;
-(NSString *)interactionBundleId;
-(void)setInteractionBundleId:(NSString *)arg1 ;
-(void)setIntentResponseUserActivityString:(NSString *)arg1 ;
-(NSString *)interactionTeamId;
-(void)setInteractionTeamId:(NSString *)arg1 ;
@end

