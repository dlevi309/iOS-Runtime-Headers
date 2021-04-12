/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPRecordField : PBCodable <NSCopying> {

	NSMutableArray* _actions;
	CKDPRecordFieldIdentifier* _identifier;
	CKDPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                            //@synthesize actions=_actions - In the implementation block
+(Class)actionType;
+(id)emptyFieldWithKey:(id)arg1 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(NSMutableArray *)actions;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)setValue:(CKDPRecordFieldValue *)arg1 ;
-(id)description;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(unsigned long long)hash;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(CKDPRecordFieldIdentifier *)arg1 ;
-(CKDPRecordFieldIdentifier *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRecordFieldValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)actionAtIndex:(unsigned long long)arg1 ;
@end

