/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration {

	CGSize _thumbnailSize;
	NSArray* _filters;

}

@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,copy) NSArray * filters;                   //@synthesize filters=_filters - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSArray *)filters;
-(CGSize)thumbnailSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(void)dealloc;
@end

