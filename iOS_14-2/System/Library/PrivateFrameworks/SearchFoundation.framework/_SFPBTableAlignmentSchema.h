/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)jsonData;
-(void)setTableColumnAlignments:(id)arg1;
-(NSArray *)tableColumnAlignments;
-(void)setMetadata:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)addTableColumnAlignment:(id)arg1;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;
-(_SFPBStringDictionary *)metadata;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _SFPBStringDictionary, NSData, NSString;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding> {

	NSArray* _tableColumnAlignments;
	_SFPBStringDictionary* _metadata;

}

@property (nonatomic,copy) NSArray * tableColumnAlignments;                 //@synthesize tableColumnAlignments=_tableColumnAlignments - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(void)setTableColumnAlignment:(id)arg1 ;
-(NSData *)jsonData;
-(void)setTableColumnAlignments:(NSArray *)arg1 ;
-(NSArray *)tableColumnAlignments;
-(void)setMetadata:(_SFPBStringDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addTableColumnAlignment:(id)arg1 ;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBStringDictionary *)metadata;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

