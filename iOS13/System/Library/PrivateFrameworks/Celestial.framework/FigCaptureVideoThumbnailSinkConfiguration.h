/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration {

	CGSize _thumbnailSize;
	NSArray* _filters;

}

@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,copy) NSArray * filters;                   //@synthesize filters=_filters - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
@end

