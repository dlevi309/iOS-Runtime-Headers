/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPListPosition : PBCodable <NSCopying> {

	int _index;
	BOOL _isReversed;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) int index;                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasIsReversed; 
@property (assign,nonatomic) BOOL isReversed;                 //@synthesize isReversed=_isReversed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIndex:(int)arg1 ;
-(BOOL)isReversed;
-(void)setIsReversed:(BOOL)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(void)setHasIsReversed:(BOOL)arg1 ;
-(BOOL)hasIsReversed;
@end

