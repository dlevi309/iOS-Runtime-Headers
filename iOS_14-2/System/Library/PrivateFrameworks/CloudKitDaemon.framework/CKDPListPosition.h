/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(int)index;
-(BOOL)isReversed;
-(void)setIndex:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIndex;
-(id)description;
-(unsigned long long)hash;
-(void)setIsReversed:(BOOL)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIsReversed:(BOOL)arg1 ;
-(BOOL)hasIsReversed;
@end

