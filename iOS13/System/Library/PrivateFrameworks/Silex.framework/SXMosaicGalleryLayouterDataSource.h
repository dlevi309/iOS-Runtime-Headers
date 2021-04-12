/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXMosaicGalleryLayouterDataSource <NSObject>
@required
-(unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
-(CGSize*)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
-(id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
-(BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg1;

@end

