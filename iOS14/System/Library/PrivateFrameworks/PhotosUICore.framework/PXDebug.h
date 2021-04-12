/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSString;

@interface PXDebug : UIImageView {

	CGImageRef _previewImage;
	CGColorRef _backgroundColor;
	NSString* _name;

}

@property (assign,nonatomic) CGImageRef previewImage;                 //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
-(id)layer;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(NSString *)name;
-(id)description;
-(void)setPreviewImage:(CGImageRef)arg1 ;
-(CGImageRef)previewImage;
-(void)setName:(NSString *)arg1 ;
-(id)__dbg_formattedDisplayName;
-(id)__dbg_snapshotImage;
@end

