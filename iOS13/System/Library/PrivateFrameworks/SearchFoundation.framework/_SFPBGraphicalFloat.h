/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(void)setDoubleValue:(double)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBGraphicalFloat : PBCodable <_SFPBGraphicalFloat, NSSecureCoding> {

	double _doubleValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double doubleValue;                    //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(NSData *)jsonData;
-(id)initWithCGFloat:(double)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

