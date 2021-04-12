/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBStringDictionary.h>
@class NSArray, NSData;


@protocol _SFPBStringDictionary <NSObject>
@property (nonatomic,copy) NSArray * keyValues; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)addKeyValues:(id)arg1;
-(NSArray *)keyValues;
-(void)clearKeyValues;
-(unsigned long long)keyValuesCount;
-(id)keyValuesAtIndex:(unsigned long long)arg1;
-(void)setKeyValues:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding> {

	NSArray* _keyValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * keyValues;                     //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithNSDictionary:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addKeyValues:(id)arg1 ;
-(NSArray *)keyValues;
-(void)clearKeyValues;
-(unsigned long long)keyValuesCount;
-(id)keyValuesAtIndex:(unsigned long long)arg1 ;
-(void)setKeyValues:(NSArray *)arg1 ;
@end

