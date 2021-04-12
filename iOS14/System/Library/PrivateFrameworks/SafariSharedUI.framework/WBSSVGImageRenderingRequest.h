/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataRequest.h>

@class NSArray, NSString;

@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) NSArray * urls; 
@property (nonatomic,readonly) NSString * svgContent; 
-(NSArray *)urls;
-(CGSize)imageSize;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
-(NSString *)svgContent;
-(id)_imageSizeValueWithSize:(CGSize)arg1 ;
-(id)initWithURL:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)initWithURLs:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)initWithSVGContent:(id)arg1 imageSize:(CGSize)arg2 ;
@end

