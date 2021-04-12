/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

