/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)to;
-(int)from;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFrom:(int)arg1 ;
-(void)setTo:(int)arg1 ;
-(void)setHasFrom:(BOOL)arg1 ;
-(BOOL)hasFrom;
-(void)setHasTo:(BOOL)arg1 ;
-(BOOL)hasTo;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(BOOL)hasAllDay;
-(void)setHasAllDay:(BOOL)arg1 ;
@end

