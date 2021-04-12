/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>
#import <libobjc.A.dylib/SFContactImage.h>
@class NSArray, NSString, NSDictionary, NSData;


@protocol SFContactImage <SFImage>
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
@property (nonatomic,copy) NSString * appIconBadgeBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(NSData *)jsonData;
-(NSString *)appIconBadgeBundleIdentifier;
-(void)setAppIconBadgeBundleIdentifier:(id)arg1;
-(NSArray *)contactIdentifiers;
-(BOOL)threeDTouchEnabled;
-(void)setContactIdentifiers:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary, NSData;

@interface SFContactImage : SFImage <SFContactImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _threeDTouchEnabled;
	NSArray* _contactIdentifiers;
	NSString* _appIconBadgeBundleIdentifier;

}

@property (nonatomic,copy) NSArray * contactIdentifiers;                             //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                                //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,copy) NSString * appIconBadgeBundleIdentifier;                  //@synthesize appIconBadgeBundleIdentifier=_appIconBadgeBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int cornerRoundingStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appIconBadgeBundleIdentifier;
-(void)setAppIconBadgeBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasThreeDTouchEnabled;
-(NSArray *)contactIdentifiers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)threeDTouchEnabled;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

