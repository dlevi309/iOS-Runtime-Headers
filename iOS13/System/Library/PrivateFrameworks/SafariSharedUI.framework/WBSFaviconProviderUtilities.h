/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@interface WBSFaviconProviderUtilities : NSObject
+(BOOL)isFaviconSize:(CGSize)arg1 morePreferrableThanFaviconSize:(CGSize)arg2 givenDesiredSize:(CGSize)arg3 ;
+(CGSize)sizeOfImageWithData:(id)arg1 closestToPreferredSize:(CGSize)arg2 isMultiResolution:(BOOL*)arg3 ;
+(long long)computeRelativeSize:(CGSize)arg1 referenceSize:(CGSize)arg2 ;
+(id)multiResolutionImageFromImageData:(id)arg1 withPreferredSize:(CGSize)arg2 atScales:(id)arg3 didGenerateResolutions:(BOOL*)arg4 ;
+(id)imageWithURL:(id)arg1 closetToPreferredSize:(CGSize)arg2 ;
@end

