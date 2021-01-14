/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet {

	PKImage* _placeHolderImage;
	CGRect _logoRect;

}

@property (nonatomic,retain) PKImage * placeHolderImage;              //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                         //@synthesize logoRect=_logoRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(id)archiveName;
+(long long)imageSetType;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(id)_initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 frontFaceImageSet:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPlaceHolderImage:(PKImage *)arg1 ;
-(CGRect)logoRect;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLogoRect:(CGRect)arg1 ;
-(PKImage *)placeHolderImage;
-(BOOL)isEqual:(id)arg1 ;
@end

