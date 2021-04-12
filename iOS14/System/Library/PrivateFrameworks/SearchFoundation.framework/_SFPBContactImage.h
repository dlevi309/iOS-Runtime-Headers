/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBContactImage.h>
@class NSArray, NSString, NSData;


@protocol _SFPBContactImage <NSObject>
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
@property (nonatomic,copy) NSString * appIconBadgeBundleIdentifier; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(void)clearContactIdentifiers;
-(void)addContactIdentifiers:(id)arg1;
-(unsigned long long)contactIdentifiersCount;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1;
-(NSData *)jsonData;
-(NSString *)appIconBadgeBundleIdentifier;
-(void)setAppIconBadgeBundleIdentifier:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSArray *)contactIdentifiers;
-(BOOL)threeDTouchEnabled;
-(void)setContactIdentifiers:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding> {

	BOOL _threeDTouchEnabled;
	NSArray* _contactIdentifiers;
	NSString* _appIconBadgeBundleIdentifier;

}

@property (nonatomic,copy) NSArray * contactIdentifiers;                         //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                            //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,copy) NSString * appIconBadgeBundleIdentifier;              //@synthesize appIconBadgeBundleIdentifier=_appIconBadgeBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)clearContactIdentifiers;
-(void)addContactIdentifiers:(id)arg1 ;
-(unsigned long long)contactIdentifiersCount;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1 ;
-(NSData *)jsonData;
-(NSString *)appIconBadgeBundleIdentifier;
-(void)setAppIconBadgeBundleIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)contactIdentifiers;
-(unsigned long long)hash;
-(BOOL)threeDTouchEnabled;
-(BOOL)readFrom:(id)arg1 ;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

