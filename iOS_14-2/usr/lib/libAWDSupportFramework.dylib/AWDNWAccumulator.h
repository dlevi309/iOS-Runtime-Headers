/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDNWAccumulator : PBCodable <NSCopying> {

	NSMutableArray* _durations;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * durations;              //@synthesize durations=_durations - In the implementation block
+(Class)durationsType;
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSMutableArray *)durations;
-(void)clearDurations;
-(void)addDurations:(id)arg1 ;
-(unsigned long long)durationsCount;
-(id)durationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDurations:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

