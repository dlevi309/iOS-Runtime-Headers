/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(NSString *)contactIdentifier;
-(BOOL)hasContactIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)labeledValueIdentifier;
-(id)description;
-(NSString *)handleValue;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setHandleValue:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLabeledValueIdentifier:(NSString *)arg1 ;
-(BOOL)hasLabeledValueIdentifier;
-(BOOL)hasHandleValue;
@end

