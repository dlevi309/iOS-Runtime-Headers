/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumn.h>
@class NSArray, NSData;


@protocol _SFPBTextColumn <NSObject>
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSections:(id)arg1;
-(NSArray *)sections;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)sectionsCount;
-(void)addSections:(id)arg1;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding> {

	NSArray* _sections;

}

@property (nonatomic,copy) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSections:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSArray *)sections;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)addSections:(id)arg1 ;
-(void)clearSections;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

