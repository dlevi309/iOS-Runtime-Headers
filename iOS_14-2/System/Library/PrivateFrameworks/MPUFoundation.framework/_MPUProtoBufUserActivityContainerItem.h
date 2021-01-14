/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {

	int _containerItemType;
	MIPMultiverseIdentifier* _selectedMultiverseIdentifier;
	MIPMultiverseIdentifier* _visualReferenceMultiverseIdentifier;
	SCD_Struct_MP5 _has;

}

@property (assign,nonatomic) BOOL hasContainerItemType; 
@property (assign,nonatomic) int containerItemType;                                                      //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;                     //@synthesize selectedMultiverseIdentifier=_selectedMultiverseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasVisualReferenceMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;              //@synthesize visualReferenceMultiverseIdentifier=_visualReferenceMultiverseIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSelectedMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setVisualReferenceMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(int)containerItemType;
-(void)setContainerItemType:(int)arg1 ;
-(void)setHasContainerItemType:(BOOL)arg1 ;
-(BOOL)hasContainerItemType;
-(BOOL)hasSelectedMultiverseIdentifier;
-(BOOL)hasVisualReferenceMultiverseIdentifier;
-(MIPMultiverseIdentifier *)selectedMultiverseIdentifier;
-(MIPMultiverseIdentifier *)visualReferenceMultiverseIdentifier;
@end

