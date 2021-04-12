/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding> {

	BOOL _skipViewMode;
	long long _imageExtensionType;
	NSURL* _baseURL;
	NSString* _alt;
	NSString* _caption;
	NSString* _posterId;
	NSString* _videoId;
	NSString* _fallbackId;
	NSString* _imageId;

}

@property (nonatomic,copy) NSString * caption;                          //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * posterId;                         //@synthesize posterId=_posterId - In the implementation block
@property (nonatomic,copy) NSString * videoId;                          //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSString * fallbackId;                       //@synthesize fallbackId=_fallbackId - In the implementation block
@property (assign,nonatomic) BOOL skipViewMode;                         //@synthesize skipViewMode=_skipViewMode - In the implementation block
@property (assign,nonatomic) long long imageExtensionType;              //@synthesize imageExtensionType=_imageExtensionType - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * alt;                              //@synthesize alt=_alt - In the implementation block
@property (nonatomic,copy) NSString * imageId;                          //@synthesize imageId=_imageId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)assetsFromDictionary:(id)arg1 ;
+(id)na_identity;
-(NSString *)alt;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSURL *)baseURL;
-(BOOL)hasImage;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)imageId;
-(void)setImageId:(NSString *)arg1 ;
-(void)setSkipViewMode:(BOOL)arg1 ;
-(NSString *)videoId;
-(NSString *)fallbackId;
-(long long)imageExtensionType;
-(BOOL)skipViewMode;
-(void)setAlt:(NSString *)arg1 ;
-(void)setImageExtensionType:(long long)arg1 ;
-(void)setPosterId:(NSString *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(void)setFallbackId:(NSString *)arg1 ;
-(id)imageIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)posterId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVideo;
@end

