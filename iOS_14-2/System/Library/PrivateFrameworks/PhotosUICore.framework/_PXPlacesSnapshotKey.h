/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PXPlacesSnapshotKey : NSObject <NSCopying> {

	long long __userInterfaceStyle;
	CGSize __imageSize;

}

@property (nonatomic,readonly) CGSize _imageSize;                          //@synthesize _imageSize=__imageSize - In the implementation block
@property (nonatomic,readonly) long long _userInterfaceStyle;              //@synthesize _userInterfaceStyle=__userInterfaceStyle - In the implementation block
-(CGSize)_imageSize;
-(id)initWithImageSize:(CGSize)arg1 userInterfaceStyle:(long long)arg2 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_userInterfaceStyle;
-(BOOL)isEqual:(id)arg1 ;
@end

