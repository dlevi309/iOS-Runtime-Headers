/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BCSTimeRangeMessage : PBCodable <NSCopying> {

	int _from;
	int _to;
	BOOL _allDay;
	SCD_Struct_BC5 _has;

}

@property (assign,nonatomic) BOOL hasFrom; 
@property (assign,nonatomic) int from;                    //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) BOOL hasTo; 
@property (assign,nonatomic) int to;                      //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) BOOL hasAllDay; 
@property (assign,nonatomic) BOOL allDay;                 //@synthesize allDay=_allDay - In the implementation block
-(int)to;
-(id)dictionaryRepresentation;
-(int)from;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)hasTo;
-(void)setTo:(int)arg1 ;
-(BOOL)hasAllDay;
-(void)setHasAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFrom;
-(void)setHasTo:(BOOL)arg1 ;
-(id)description;
-(void)setHasFrom:(BOOL)arg1 ;
-(void)setFrom:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

