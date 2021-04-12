/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBURLImage.h>
@class _SFPBURL, NSData;


@protocol _SFPBURLImage <NSObject>
@property (nonatomic,retain) _SFPBURL * urlValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBURL *)urlValue;
-(void)setUrlValue:(id)arg1;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBURL, NSData, NSString;

@interface _SFPBURLImage : PBCodable <_SFPBURLImage, NSSecureCoding> {

	_SFPBURL* _urlValue;

}

@property (nonatomic,retain) _SFPBURL * urlValue;                   //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(_SFPBURL *)urlValue;
-(id)initWithFacade:(id)arg1 ;
-(void)setUrlValue:(_SFPBURL *)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

