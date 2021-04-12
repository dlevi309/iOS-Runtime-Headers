/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHadPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)setSelectedSet:(int)arg1 ;
-(int)selectedSet;
-(void)setHasSelectedSet:(BOOL)arg1 ;
-(BOOL)hasSelectedSet;
-(id)selectedSetAsString:(int)arg1 ;
-(int)StringAsSelectedSet:(id)arg1 ;
-(void)setHasHadPreviouslyCustomizedSet:(BOOL)arg1 ;
-(BOOL)hasHadPreviouslyCustomizedSet;
-(BOOL)hadPreviouslyCustomizedSet;
@end

