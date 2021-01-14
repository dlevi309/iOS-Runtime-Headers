/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, TPSAssetSizes;

@interface TPSMetadata : TPSSerializableObject <NSCopying, NSSecureCoding> {

	BOOL _contextualTipsInactive;
	NSString* _language;
	NSURL* _assetBaseURL;
	NSString* _contentMapHash;
	TPSAssetSizes* _assetSizes;

}

@property (assign,nonatomic) BOOL contextualTipsInactive;              //@synthesize contextualTipsInactive=_contextualTipsInactive - In the implementation block
@property (nonatomic,copy) NSString * language;                        //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSURL * assetBaseURL;                       //@synthesize assetBaseURL=_assetBaseURL - In the implementation block
@property (nonatomic,copy) NSString * contentMapHash;                  //@synthesize contentMapHash=_contentMapHash - In the implementation block
@property (nonatomic,copy) TPSAssetSizes * assetSizes;                 //@synthesize assetSizes=_assetSizes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)metadataFromDictionary:(id)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)contextualTipsInactive;
-(NSURL *)assetBaseURL;
-(void)setAssetBaseURL:(NSURL *)arg1 ;
-(NSString *)contentMapHash;
-(void)setContentMapHash:(NSString *)arg1 ;
-(TPSAssetSizes *)assetSizes;
-(void)setAssetSizes:(TPSAssetSizes *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContextualTipsInactive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

