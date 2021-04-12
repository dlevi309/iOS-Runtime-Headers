/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFProduct.h>
@class NSString, NSURL, NSDictionary, NSData;


@protocol SFProduct <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSURL * availabilityURL; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) BOOL buyable; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setDisplayName:(id)arg1;
-(void)setProductIdentifier:(id)arg1;
-(NSString *)productIdentifier;
-(NSData *)jsonData;
-(void)setAvailabilityURL:(id)arg1;
-(void)setBuyable:(BOOL)arg1;
-(NSURL *)availabilityURL;
-(BOOL)buyable;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _buyable;
	NSString* _identifier;
	NSString* _productIdentifier;
	NSURL* _availabilityURL;
	NSString* _displayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                             //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * availabilityURL;                                  //@synthesize availabilityURL=_availabilityURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL buyable;                                           //@synthesize buyable=_buyable - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAvailabilityURL:(NSURL *)arg1 ;
-(void)setBuyable:(BOOL)arg1 ;
-(NSURL *)availabilityURL;
-(BOOL)buyable;
-(BOOL)hasBuyable;
@end

