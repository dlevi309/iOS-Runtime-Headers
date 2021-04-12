/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDisplaySpec : NSObject {

	long long _contentMode;
	CGSize _targetSize;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) long long contentMode;                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;              //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
-(CGSize)targetSize;
-(long long)contentMode;
-(void)setTargetSize:(CGSize)arg1 ;
-(id)init;
-(id)shortDescription;
-(CGRect)normalizedCropRect;
-(id)description;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(BOOL)hasExplicitCrop;
-(CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(CGRect)arg3 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 ;
-(BOOL)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 ;
@end

