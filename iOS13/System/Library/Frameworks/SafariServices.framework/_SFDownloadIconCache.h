/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSPointerArray, NSMutableDictionary, NSMutableSet;

@interface _SFDownloadIconCache : NSObject {

	NSPointerArray* _observers;
	NSMutableDictionary* _thumbnailCache;
	NSMutableDictionary* _utiCache;
	NSMutableSet* _activeRequestIdentifiers;

}
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_startThumbnailRequestForSource:(id)arg1 reportGenericIcons:(BOOL)arg2 ;
-(id)_genericIconForUTI:(id)arg1 ;
-(id)_lookupGenericIconForType:(id)arg1 ;
-(void)_didGenerateThumbnail:(id)arg1 forSource:(id)arg2 ;
-(void)_generateThumbnailForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)iconForSource:(id)arg1 ;
-(void)regenerateIconForSource:(id)arg1 ;
@end

