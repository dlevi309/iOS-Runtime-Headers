/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _precomposed;
	long long _format;
	NSData* _imageData;
	NSString* _imagePath;
	NSString* _imageName;
	NSString* _bundlePath;
	NSString* _applicationIdentifier;

}

@property (assign,nonatomic) long long format;                                   //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                                 //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                 //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                     //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3 ;
+(id)_variantWithFormat:(long long)arg1 ;
+(id)variantWithFormat:(long long)arg1 imagePath:(id)arg2 ;
+(id)variantWithFormat:(long long)arg1 imageData:(id)arg2 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(void)setFormat:(long long)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(long long)format;
-(NSString *)bundlePath;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSData *)imageData;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)imagePath;
-(void)setPrecomposed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPrecomposed;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
