/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSMutableArray *)ranges;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setFieldId:(CKDPRecordFieldIdentifier *)arg1 ;
-(CKDPRecordFieldIdentifier *)fieldId;
-(unsigned long long)hash;
-(void)addRange:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)rangesCount;
-(void)clearRanges;
-(BOOL)hasFieldId;
@end

