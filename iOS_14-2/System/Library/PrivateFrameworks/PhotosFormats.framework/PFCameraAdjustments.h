/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AVApplePortraitMetadata;

@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _effectFilterName;
	NSString* _portraitEffectFilterName;
	AVApplePortraitMetadata* _portraitMetadata;
	BOOL _depthEnabled;
	CGRect _cropRect;

}

@property (nonatomic,copy,readonly) NSString * effectFilterName;                        //@synthesize effectFilterName=_effectFilterName - In the implementation block
@property (nonatomic,copy,readonly) NSString * portraitEffectFilterName;                //@synthesize portraitEffectFilterName=_portraitEffectFilterName - In the implementation block
@property (nonatomic,readonly) AVApplePortraitMetadata * portraitMetadata;              //@synthesize portraitMetadata=_portraitMetadata - In the implementation block
@property (getter=isDepthEnabled,nonatomic,readonly) BOOL depthEnabled;                 //@synthesize depthEnabled=_depthEnabled - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                         //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) BOOL hasCrop; 
+(BOOL)supportsSecureCoding;
-(CGRect)cropRect;
-(AVApplePortraitMetadata *)portraitMetadata;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAdjustments:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCrop;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isDepthEnabled;
-(NSString *)effectFilterName;
-(NSString *)portraitEffectFilterName;
-(id)initWithEffectFilter:(id)arg1 cropRect:(CGRect)arg2 ;
@end

