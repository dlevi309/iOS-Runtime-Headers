/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@protocol QLItemThumbnailGeneratorProtocol;
@class UIImage, QLItem;

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation {

	UIImage* _thumbnail;
	id<QLItemThumbnailGeneratorProtocol> _generator;
	QLItem* _item;
	double _scale;
	CGSize _size;

}

@property (nonatomic,retain) id<QLItemThumbnailGeneratorProtocol> generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) QLItem * item;                                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) CGSize size;                                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                                //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                         //@synthesize thumbnail=_thumbnail - In the implementation block
-(UIImage *)thumbnail;
-(CGSize)size;
-(QLItem *)item;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setItem:(QLItem *)arg1 ;
-(void)main;
-(void)setScale:(double)arg1 ;
-(id)initWithThumbnailGenerator:(id)arg1 item:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
-(void)setGenerator:(id<QLItemThumbnailGeneratorProtocol>)arg1 ;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id<QLItemThumbnailGeneratorProtocol>)generator;
@end

