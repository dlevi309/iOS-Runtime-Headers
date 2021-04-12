/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying> {

	NSMutableArray* _fields;
	NSMutableArray* _listFields;

}

@property (nonatomic,retain) NSMutableArray * fields;                  //@synthesize fields=_fields - In the implementation block
@property (nonatomic,retain) NSMutableArray * listFields;              //@synthesize listFields=_listFields - In the implementation block
+(Class)fieldsType;
+(Class)listFieldType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)fields;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)addListField:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(unsigned long long)listFieldsCount;
-(void)clearListFields;
-(id)listFieldAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)listFields;
-(void)setListFields:(NSMutableArray *)arg1 ;
@end

