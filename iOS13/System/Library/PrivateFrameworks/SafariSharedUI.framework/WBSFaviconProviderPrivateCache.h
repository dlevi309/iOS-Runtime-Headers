/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSCache, NSMutableDictionary;

@interface WBSFaviconProviderPrivateCache : NSObject {

	NSCache* _uuidToImageDataCache;
	NSMutableDictionary* _pageURLStringToIconInfoDict;
	NSMutableDictionary* _iconURLStringToIconInfoDict;
	NSMutableDictionary* _pageURLStringToRejectedResourceIconInfoDict;

}
-(id)init;
-(void)removeAllImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsRejectedResource:(BOOL)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 ;
-(void)setImageData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 ;
-(id)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(BOOL)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 ;
-(void)removeImageDataForPageURLString:(id)arg1 ;
-(id)imageDataForPageURLString:(id)arg1 ;
-(id)imageDataForIconURLString:(id)arg1 ;
-(id)imageInfoForPageURLString:(id)arg1 ;
-(id)imageInfoForIconURLString:(id)arg1 ;
-(id)firstImageDataMatchingPageURLStringIn:(id)arg1 matchedPageURLString:(id*)arg2 ;
-(id)pageURLStringsWithPrefixesIn:(id)arg1 ;
@end

