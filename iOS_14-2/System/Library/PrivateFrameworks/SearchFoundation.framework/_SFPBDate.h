/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDate.h>
@class NSData;


@protocol _SFPBDate <NSObject>
@property (assign,nonatomic) double secondsSince1970; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setSecondsSince1970:(double)arg1;
-(double)secondsSince1970;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBDate : PBCodable <_SFPBDate, NSSecureCoding> {

	double _secondsSince1970;

}

@property (assign,nonatomic) double secondsSince1970;               //@synthesize secondsSince1970=_secondsSince1970 - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setSecondsSince1970:(double)arg1 ;
-(double)secondsSince1970;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithNSDate:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

