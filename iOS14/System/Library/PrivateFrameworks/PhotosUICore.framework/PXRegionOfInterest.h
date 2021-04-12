/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCoordinatedRect.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXImageRequester, PXViewSpec, NSString, PXTitleSubtitleLabelSpec;

@interface PXRegionOfInterest : PXCoordinatedRect <NSCopying> {

	PXImageRequester* _imageRequester;
	PXViewSpec* _imageViewSpec;
	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _textViewSpec;
	/*^block*/id _placeholderViewFactory;
	CGRect _imageContentsRect;

}

@property (nonatomic,retain) PXImageRequester * imageRequester;                    //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                             //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (nonatomic,retain) PXViewSpec * imageViewSpec;                           //@synthesize imageViewSpec=_imageViewSpec - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * textViewSpec;              //@synthesize textViewSpec=_textViewSpec - In the implementation block
@property (nonatomic,copy) id placeholderViewFactory;                              //@synthesize placeholderViewFactory=_placeholderViewFactory - In the implementation block
+(CGRect)convertedImageContentsRectOfRegionOfInterest:(id)arg1 toCoordinateSpace:(id)arg2 fittingSize:(CGSize)arg3 flipped:(BOOL)arg4 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(CGRect)imageContentsRect;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(PXViewSpec *)imageViewSpec;
-(void)setImageViewSpec:(PXViewSpec *)arg1 ;
-(PXTitleSubtitleLabelSpec *)textViewSpec;
-(void)setTextViewSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(void)setPlaceholderViewFactory:(id)arg1 ;
-(id)placeholderViewFactory;
-(id)initWithRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

