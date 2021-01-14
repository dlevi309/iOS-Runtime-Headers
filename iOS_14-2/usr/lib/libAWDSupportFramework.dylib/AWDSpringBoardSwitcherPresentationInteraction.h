/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSpringBoardSwitcherPresentationInteraction : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _source;
	BOOL _didCommit;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasDidCommit; 
@property (assign,nonatomic) BOOL didCommit;                            //@synthesize didCommit=_didCommit - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasSource;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)source;
-(BOOL)didCommit;
-(void)setDidCommit:(BOOL)arg1 ;
-(void)setHasDidCommit:(BOOL)arg1 ;
-(BOOL)hasDidCommit;
@end

