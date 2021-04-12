/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class ICTrackedParagraph, NSString, UIImage, UIImageView;

@interface ICTrackedParagraphImageInfo : NSObject {

	BOOL _estimated;
	ICTrackedParagraph* _trackedParagraph;
	NSString* _uuid;
	UIImage* _image;
	UIImageView* _imageViewIfExists;
	CGRect _boundingRect;
	CGRect _rect;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect boundingRect;                                //@synthesize boundingRect=_boundingRect - In the implementation block
@property (assign,nonatomic) CGRect rect;                                        //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewIfExists;                    //@synthesize imageViewIfExists=_imageViewIfExists - In the implementation block
@property (assign,nonatomic) BOOL estimated;                                     //@synthesize estimated=_estimated - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGRect)boundingRect;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 ;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
-(UIImageView *)imageViewIfExists;
-(void)setImageViewIfExists:(UIImageView *)arg1 ;
-(BOOL)estimated;
-(void)setEstimated:(BOOL)arg1 ;
@end

