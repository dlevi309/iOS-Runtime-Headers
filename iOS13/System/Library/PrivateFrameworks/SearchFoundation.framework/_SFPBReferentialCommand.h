/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBReferentialCommand.h>
@class NSString, NSData;


@protocol _SFPBReferentialCommand <NSObject>
@property (nonatomic,copy) NSString * referenceIdentifier; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(NSString *)referenceIdentifier;
-(void)setReferenceIdentifier:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBReferentialCommand : PBCodable <_SFPBReferentialCommand, NSSecureCoding> {

	NSString* _referenceIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * referenceIdentifier;              //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)referenceIdentifier;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

