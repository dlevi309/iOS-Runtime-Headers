/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {

	unsigned long long _changeNumber;
	NSMutableArray* _deltas;
	NSString* _instanceIdentifier;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,retain) NSMutableArray * deltas;                      //@synthesize deltas=_deltas - In the implementation block
@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeNumber; 
@property (assign,nonatomic) unsigned long long changeNumber;              //@synthesize changeNumber=_changeNumber - In the implementation block
+(Class)deltasType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(unsigned long long)changeNumber;
-(NSMutableArray *)deltas;
-(void)setDeltas:(NSMutableArray *)arg1 ;
-(void)setChangeNumber:(unsigned long long)arg1 ;
-(void)addDeltas:(id)arg1 ;
-(void)clearDeltas;
-(unsigned long long)deltasCount;
-(id)deltasAtIndex:(unsigned long long)arg1 ;
-(void)setHasChangeNumber:(BOOL)arg1 ;
-(BOOL)hasChangeNumber;
@end

