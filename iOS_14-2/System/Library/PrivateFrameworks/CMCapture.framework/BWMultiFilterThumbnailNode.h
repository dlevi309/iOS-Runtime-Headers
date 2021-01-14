/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, BWColorLookupCache, FigColorCubeMetalFilter;

@interface BWMultiFilterThumbnailNode : BWNode {

	CGSize _thumbnailSize;
	NSArray* _filters;
	BWColorLookupCache* _colorLookupCache;
	FigColorCubeMetalFilter* _filter;
	opaqueCMFormatDescriptionRef _mostRecentFormatDescription;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(id)videoOutput;
-(id)initWithFilters:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(int)_loadAndConfigureFilterBundle;
-(void)dealloc;
@end

