/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface MSPPinnedPlaceContactStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _contactIdentifier;
	NSString* _handleValue;
	NSString* _labeledValueIdentifier;

}

@property (nonatomic,readonly) BOOL hasContactIdentifier; 
@property (nonatomic,retain) NSString * contactIdentifier;                   //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasLabeledValueIdentifier; 
@property (nonatomic,retain) NSString * labeledValueIdentifier;              //@synthesize labeledValueIdentifier=_labeledValueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasHandleValue; 
@property (nonatomic,retain) NSString * handleValue;                         //@synthesize handleValue=_handleValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)contactIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setLabeledValueIdentifier:(NSString *)arg1 ;
-(NSString *)labeledValueIdentifier;
-(void)setHandleValue:(NSString *)arg1 ;
-(BOOL)hasContactIdentifier;
-(BOOL)hasLabeledValueIdentifier;
-(BOOL)hasHandleValue;
-(NSString *)handleValue;
@end

