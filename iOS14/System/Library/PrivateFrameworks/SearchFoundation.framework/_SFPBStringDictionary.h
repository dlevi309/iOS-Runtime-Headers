/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBStringDictionary.h>
@class NSArray, NSData;


@protocol _SFPBStringDictionary <NSObject>
@property (nonatomic,copy) NSArray * keyValues; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(void)addKeyValues:(id)arg1;
-(void)clearKeyValues;
-(unsigned long long)keyValuesCount;
-(id)keyValuesAtIndex:(unsigned long long)arg1;
-(void)setKeyValues:(id)arg1;
-(NSArray *)keyValues;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding> {

	NSArray* _keyValues;

}

@property (nonatomic,copy) NSArray * keyValues;                     //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithNSDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addKeyValues:(id)arg1 ;
-(void)clearKeyValues;
-(unsigned long long)keyValuesCount;
-(id)keyValuesAtIndex:(unsigned long long)arg1 ;
-(void)setKeyValues:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)keyValues;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

