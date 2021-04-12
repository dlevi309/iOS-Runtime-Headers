/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class UIImage, NSArray;

@interface CKAnimatedImage : NSObject {

	UIImage* _image;
	NSArray* _durations;

}

@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * durations;              //@synthesize durations=_durations - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
+(id)animatedImageWithContentsOfASTCURL:(id)arg1 ;
+(id)animatedImageWithContentsOfCPBitmapURL:(id)arg1 ;
+(id)filenameExtension;
+(BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(/*^block*/id)arg3 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(BOOL)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)imageWithContentsOfCPBitmapURL:(id)arg1 ;
+(id)animatedImageWithASTCData:(id)arg1 ;
+(BOOL)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(/*^block*/id)arg2 ;
-(id)description;
-(CGSize)size;
-(double)scale;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)frames;
-(id)initWithImages:(id)arg1 durations:(id)arg2 ;
-(BOOL)writeToASTCURL:(id)arg1 ;
-(BOOL)writeToCPBitmapURL:(id)arg1 ;
-(NSArray *)durations;
-(id)_initWithImage:(id)arg1 durations:(id)arg2 ;
-(void)setDurations:(NSArray *)arg1 ;
@end

