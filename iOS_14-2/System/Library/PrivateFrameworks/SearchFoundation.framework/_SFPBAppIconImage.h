/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAppIconImage.h>
@class NSString, NSData;


@protocol _SFPBAppIconImage <NSObject>
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) int iconType; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(void)setIconType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(int)iconType;
-(void)setBundleIdentifier:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBAppIconImage : PBCodable <_SFPBAppIconImage, NSSecureCoding> {

	int _iconType;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int iconType;                           //@synthesize iconType=_iconType - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(void)setIconType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)iconType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

