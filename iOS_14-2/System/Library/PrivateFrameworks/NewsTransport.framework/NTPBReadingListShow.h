/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBReadingListShow : PBCodable <NSCopying> {

	int _userAction;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                  //@synthesize userAction=_userAction - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)userAction;
-(BOOL)hasUserAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

