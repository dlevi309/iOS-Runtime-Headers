/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CPLFaceInstance : PBCodable <NSCopying> {

	double _centerX;
	double _centerY;
	double _size;
	unsigned _faceState;
	unsigned _nameSource;
	NSString* _personIdentifier;
	NSMutableArray* _rejectedPersonIdentifiers;
	SCD_Struct_CP8 _has;

}

@property (getter=isNoneState,nonatomic,readonly) BOOL noneState; 
@property (assign,getter=isKeyFace,nonatomic) BOOL keyFace; 
@property (assign,getter=isManual,nonatomic) BOOL manual; 
@property (nonatomic,readonly) BOOL hasPersonIdentifier; 
@property (nonatomic,retain) NSString * personIdentifier;                             //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCenterX; 
@property (assign,nonatomic) double centerX;                                          //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) BOOL hasCenterY; 
@property (assign,nonatomic) double centerY;                                          //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) double size;                                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasFaceState; 
@property (assign,nonatomic) unsigned faceState;                                      //@synthesize faceState=_faceState - In the implementation block
@property (nonatomic,retain) NSMutableArray * rejectedPersonIdentifiers;              //@synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasNameSource; 
@property (assign,nonatomic) unsigned nameSource;                                     //@synthesize nameSource=_nameSource - In the implementation block
+(Class)rejectedPersonIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(double)size;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(double)arg1 ;
-(double)centerX;
-(double)centerY;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isManual;
-(BOOL)hasSize;
-(void)setHasSize:(BOOL)arg1 ;
-(unsigned)nameSource;
-(void)setNameSource:(unsigned)arg1 ;
-(id)pointerDescription;
-(NSString *)personIdentifier;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(BOOL)isKeyFace;
-(void)setManual:(BOOL)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setRejectedPersonIdentifiers:(NSMutableArray *)arg1 ;
-(void)setKeyFace:(BOOL)arg1 ;
-(NSMutableArray *)rejectedPersonIdentifiers;
-(void)_setFaceStateBit:(unsigned)arg1 fromBoolValue:(BOOL)arg2 ;
-(BOOL)_isFaceStateBitSet:(unsigned)arg1 ;
-(void)clearState;
-(BOOL)isNoneState;
-(BOOL)hasPersonIdentifier;
-(void)setHasCenterX:(BOOL)arg1 ;
-(BOOL)hasCenterX;
-(void)setHasCenterY:(BOOL)arg1 ;
-(BOOL)hasCenterY;
-(void)setFaceState:(unsigned)arg1 ;
-(void)setHasFaceState:(BOOL)arg1 ;
-(BOOL)hasFaceState;
-(void)clearRejectedPersonIdentifiers;
-(void)addRejectedPersonIdentifiers:(id)arg1 ;
-(unsigned long long)rejectedPersonIdentifiersCount;
-(id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setHasNameSource:(BOOL)arg1 ;
-(BOOL)hasNameSource;
-(unsigned)faceState;
@end

