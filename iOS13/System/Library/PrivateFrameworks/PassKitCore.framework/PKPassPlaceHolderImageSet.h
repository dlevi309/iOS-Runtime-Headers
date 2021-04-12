/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(long long)imageSetType;
+(id)archiveName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)placeHolderImage;
-(CGRect)logoRect;
-(id)_initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 frontFaceImageSet:(id)arg5 ;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setLogoRect:(CGRect)arg1 ;
-(void)setPlaceHolderImage:(PKImage *)arg1 ;
@end

