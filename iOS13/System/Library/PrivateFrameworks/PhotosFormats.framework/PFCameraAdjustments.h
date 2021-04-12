/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)cropRect;
-(AVApplePortraitMetadata *)portraitMetadata;
-(BOOL)hasCrop;
-(BOOL)isDepthEnabled;
-(NSString *)portraitEffectFilterName;
-(NSString *)effectFilterName;
-(id)initWithAdjustments:(id)arg1 ;
@end

