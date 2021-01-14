/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBGraphicalFloat.h>
@class NSData;


@protocol _SFPBGraphicalFloat <NSObject>
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(double)doubleValue;
-(void)setDoubleValue:(double)arg1;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBGraphicalFloat : PBCodable <_SFPBGraphicalFloat, NSSecureCoding> {

	double _doubleValue;

}

@property (assign,nonatomic) double doubleValue;                    //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(double)doubleValue;
-(void)setDoubleValue:(double)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCGFloat:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

