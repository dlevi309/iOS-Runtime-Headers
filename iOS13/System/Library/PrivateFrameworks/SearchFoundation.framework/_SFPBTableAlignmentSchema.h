/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTableAlignmentSchema.h>
@class NSArray, _SFPBStringDictionary, NSData;


@protocol _SFPBTableAlignmentSchema <NSObject>
@property (nonatomic,copy) NSArray * tableColumnAlignments; 
@property (nonatomic,retain) _SFPBStringDictionary * metadata; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(void)setMetadata:(id)arg1;
-(_SFPBStringDictionary *)metadata;
-(NSData *)jsonData;
-(void)setTableColumnAlignments:(id)arg1;
-(NSArray *)tableColumnAlignments;
-(id)initWithJSON:(id)arg1;
-(void)addTableColumnAlignment:(id)arg1;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _SFPBStringDictionary, NSData, NSString;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding> {

	NSArray* _tableColumnAlignments;
	_SFPBStringDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * tableColumnAlignments;                 //@synthesize tableColumnAlignments=_tableColumnAlignments - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(_SFPBStringDictionary *)arg1 ;
-(_SFPBStringDictionary *)metadata;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setTableColumnAlignments:(NSArray *)arg1 ;
-(NSArray *)tableColumnAlignments;
-(void)setTableColumnAlignment:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addTableColumnAlignment:(id)arg1 ;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1 ;
@end

