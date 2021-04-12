/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPRequestedListField : PBCodable <NSCopying> {

	CKDPRecordFieldIdentifier* _fieldId;
	NSMutableArray* _ranges;

}

@property (nonatomic,readonly) BOOL hasFieldId; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldId;              //@synthesize fieldId=_fieldId - In the implementation block
@property (nonatomic,retain) NSMutableArray * ranges;                          //@synthesize ranges=_ranges - In the implementation block
+(Class)rangeType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addRange:(id)arg1 ;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ranges;
-(CKDPRecordFieldIdentifier *)fieldId;
-(void)setFieldId:(CKDPRecordFieldIdentifier *)arg1 ;
-(unsigned long long)rangesCount;
-(void)clearRanges;
-(BOOL)hasFieldId;
@end

