/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumn.h>
@class NSArray, NSData;


@protocol _SFPBTextColumn <NSObject>
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSArray *)sections;
-(void)setSections:(id)arg1;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1;
-(void)addSections:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding> {

	NSArray* _sections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(void)addSections:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

