/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _selectedSet;
	BOOL _hadPreviouslyCustomizedSet;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedSet; 
@property (assign,nonatomic) int selectedSet;                                 //@synthesize selectedSet=_selectedSet - In the implementation block
@property (assign,nonatomic) BOOL hasHadPreviouslyCustomizedSet; 
@property (assign,nonatomic) BOOL hadPreviouslyCustomizedSet;                 //@synthesize hadPreviouslyCustomizedSet=_hadPreviouslyCustomizedSet - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setHadPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)setSelectedSet:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)selectedSet;
-(void)setHasSelectedSet:(BOOL)arg1 ;
-(BOOL)hasSelectedSet;
-(id)selectedSetAsString:(int)arg1 ;
-(int)StringAsSelectedSet:(id)arg1 ;
-(BOOL)hadPreviouslyCustomizedSet;
-(void)setHasHadPreviouslyCustomizedSet:(BOOL)arg1 ;
-(BOOL)hasHadPreviouslyCustomizedSet;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

