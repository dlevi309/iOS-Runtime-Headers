/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fields;
-(void)addFields:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(unsigned long long)hash;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addListField:(id)arg1 ;
-(NSMutableArray *)listFields;
-(unsigned long long)listFieldsCount;
-(void)clearListFields;
-(id)listFieldAtIndex:(unsigned long long)arg1 ;
-(void)setListFields:(NSMutableArray *)arg1 ;
@end

