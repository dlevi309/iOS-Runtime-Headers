/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBInterface : PBCodable <NSCopying> {

	unsigned _delegateIndex;
	unsigned _generation;
	unsigned _index;
	unsigned _mtu;
	NSString* _name;
	int _subtype;
	int _type;
	BOOL _expensive;
	SCD_Struct_NW33 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSubtype; 
@property (assign,nonatomic) int subtype;                         //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index;                      //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasGeneration; 
@property (assign,nonatomic) unsigned generation;                 //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) BOOL hasDelegateIndex; 
@property (assign,nonatomic) unsigned delegateIndex;              //@synthesize delegateIndex=_delegateIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMtu; 
@property (assign,nonatomic) unsigned mtu;                        //@synthesize mtu=_mtu - In the implementation block
@property (assign,nonatomic) BOOL hasExpensive; 
@property (assign,nonatomic) BOOL expensive;                      //@synthesize expensive=_expensive - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)subtype;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasName;
-(unsigned)generation;
-(void)setIndex:(unsigned)arg1 ;
-(void)setExpensive:(BOOL)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(unsigned)mtu;
-(void)setHasSubtype:(BOOL)arg1 ;
-(BOOL)hasSubtype;
-(id)subtypeAsString:(int)arg1 ;
-(int)StringAsSubtype:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(void)setGeneration:(unsigned)arg1 ;
-(void)setHasGeneration:(BOOL)arg1 ;
-(BOOL)hasGeneration;
-(void)setDelegateIndex:(unsigned)arg1 ;
-(void)setHasDelegateIndex:(BOOL)arg1 ;
-(BOOL)hasDelegateIndex;
-(void)setMtu:(unsigned)arg1 ;
-(void)setHasMtu:(BOOL)arg1 ;
-(BOOL)hasMtu;
-(void)setHasExpensive:(BOOL)arg1 ;
-(BOOL)hasExpensive;
-(unsigned)delegateIndex;
-(BOOL)expensive;
@end

