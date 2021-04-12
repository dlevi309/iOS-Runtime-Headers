/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

}

@property (nonatomic,retain) NSMutableArray * deltas;                      //@synthesize deltas=_deltas - In the implementation block
@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeNumber; 
@property (assign,nonatomic) unsigned long long changeNumber;              //@synthesize changeNumber=_changeNumber - In the implementation block
+(Class)deltasType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)deltas;
-(void)mergeFrom:(id)arg1 ;
-(void)addDeltas:(id)arg1 ;
-(void)setDeltas:(NSMutableArray *)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(void)setChangeNumber:(unsigned long long)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(id)description;
-(void)clearDeltas;
-(unsigned long long)hash;
-(void)setHasChangeNumber:(BOOL)arg1 ;
-(BOOL)hasChangeNumber;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)changeNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)deltasCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)deltasAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

