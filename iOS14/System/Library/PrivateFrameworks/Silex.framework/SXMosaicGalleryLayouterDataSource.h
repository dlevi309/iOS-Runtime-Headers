/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

