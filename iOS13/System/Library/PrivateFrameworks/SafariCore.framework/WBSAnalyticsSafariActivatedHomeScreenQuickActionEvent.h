/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariActivatedHomeScreenQuickActionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _quickAction;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasQuickAction; 
@property (assign,nonatomic) int quickAction;                           //@synthesize quickAction=_quickAction - In the implementation block
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
-(void)setQuickAction:(int)arg1 ;
-(int)quickAction;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasQuickAction:(BOOL)arg1 ;
-(BOOL)hasQuickAction;
-(id)quickActionAsString:(int)arg1 ;
-(int)StringAsQuickAction:(id)arg1 ;
@end

