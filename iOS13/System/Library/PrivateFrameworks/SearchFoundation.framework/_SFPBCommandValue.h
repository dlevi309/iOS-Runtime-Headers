/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCommandValue.h>
@class _SFPBReferentialCommand, NSData;


@protocol _SFPBCommandValue <NSObject>
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBReferentialCommand, NSData, NSString;

@interface _SFPBCommandValue : PBCodable <_SFPBCommandValue, NSSecureCoding> {

	_SFPBReferentialCommand* _referentialCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand;              //@synthesize referentialCommand=_referentialCommand - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(_SFPBReferentialCommand *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

