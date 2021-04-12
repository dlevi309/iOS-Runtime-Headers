/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)filenameExtension;
+(id)animatedImageWithContentsOfASTCURL:(id)arg1 ;
+(id)animatedImageWithContentsOfCPBitmapURL:(id)arg1 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(/*^block*/id)arg3 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 ;
+(BOOL)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)imageWithContentsOfCPBitmapURL:(id)arg1 ;
+(id)animatedImageWithASTCData:(id)arg1 ;
+(BOOL)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(/*^block*/id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)frames;
-(CGSize)size;
-(double)scale;
-(BOOL)writeToASTCURL:(id)arg1 ;
-(BOOL)writeToCPBitmapURL:(id)arg1 ;
-(UIImage *)image;
-(id)description;
-(NSArray *)durations;
-(id)_initWithImage:(id)arg1 durations:(id)arg2 ;
-(void)setDurations:(NSArray *)arg1 ;
-(id)initWithImages:(id)arg1 durations:(id)arg2 ;
@end

