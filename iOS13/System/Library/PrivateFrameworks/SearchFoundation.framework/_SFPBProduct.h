/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProduct.h>
@class NSString, _SFPBURL, NSData;


@protocol _SFPBProduct <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,retain) _SFPBURL * availabilityURL; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) BOOL buyable; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)displayName;
-(void)setDisplayName:(id)arg1;
-(void)setProductIdentifier:(id)arg1;
-(NSString *)productIdentifier;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setAvailabilityURL:(id)arg1;
-(void)setBuyable:(BOOL)arg1;
-(_SFPBURL *)availabilityURL;
-(BOOL)buyable;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBURL, NSData;

@interface _SFPBProduct : PBCodable <_SFPBProduct, NSSecureCoding> {

	BOOL _buyable;
	NSString* _identifier;
	NSString* _productIdentifier;
	_SFPBURL* _availabilityURL;
	NSString* _displayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBURL * availabilityURL;              //@synthesize availabilityURL=_availabilityURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL buyable;                            //@synthesize buyable=_buyable - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setAvailabilityURL:(_SFPBURL *)arg1 ;
-(void)setBuyable:(BOOL)arg1 ;
-(_SFPBURL *)availabilityURL;
-(BOOL)buyable;
@end

