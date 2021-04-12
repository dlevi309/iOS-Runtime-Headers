/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSArray;

@interface CAMVideoThumbnailOutputConfiguration : NSObject {

	NSArray* _filters;
	CGSize _thumbnailSize;

}

@property (nonatomic,readonly) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                 //@synthesize filters=_filters - In the implementation block
-(NSArray *)filters;
-(id)initWithMode:(long long)arg1 ;
-(CGSize)thumbnailSize;
-(id)initWithThumbnailSize:(CGSize)arg1 filters:(id)arg2 ;
@end

