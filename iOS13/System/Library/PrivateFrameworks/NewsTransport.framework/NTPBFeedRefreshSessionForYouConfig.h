/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBFeedRefreshSessionForYouConfig : PBCodable <NSCopying> {

	BOOL _isSpecialEventsTakeoverEnabled;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasIsSpecialEventsTakeoverEnabled; 
@property (assign,nonatomic) BOOL isSpecialEventsTakeoverEnabled;                 //@synthesize isSpecialEventsTakeoverEnabled=_isSpecialEventsTakeoverEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isSpecialEventsTakeoverEnabled;
-(void)setIsSpecialEventsTakeoverEnabled:(BOOL)arg1 ;
-(void)setHasIsSpecialEventsTakeoverEnabled:(BOOL)arg1 ;
-(BOOL)hasIsSpecialEventsTakeoverEnabled;
@end

