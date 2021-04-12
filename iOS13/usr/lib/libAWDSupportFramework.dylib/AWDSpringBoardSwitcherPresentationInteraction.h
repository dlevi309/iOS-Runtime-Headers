/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)didCommit;
-(void)setDidCommit:(BOOL)arg1 ;
-(void)setHasDidCommit:(BOOL)arg1 ;
-(BOOL)hasDidCommit;
@end

