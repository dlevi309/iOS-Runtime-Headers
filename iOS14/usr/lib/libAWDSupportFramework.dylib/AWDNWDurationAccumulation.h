/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDNWDurationAccumulation : PBCodable <NSCopying> {

	NSString* _name;
	NSMutableArray* _states;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * states;              //@synthesize states=_states - In the implementation block
+(Class)statesType;
-(id)dictionaryRepresentation;
-(unsigned long long)statesCount;
-(void)clearStates;
-(BOOL)hasName;
-(NSMutableArray *)states;
-(void)addStates:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)statesAtIndex:(unsigned long long)arg1 ;
-(void)setStates:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

