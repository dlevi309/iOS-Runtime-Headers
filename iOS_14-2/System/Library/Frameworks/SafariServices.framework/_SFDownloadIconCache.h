/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSPointerArray, NSMutableDictionary, NSMutableSet;

@interface _SFDownloadIconCache : NSObject {

	NSPointerArray* _observers;
	NSMutableDictionary* _thumbnailCache;
	NSMutableDictionary* _utiCache;
	NSMutableSet* _activeRequestIdentifiers;

}
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)_startThumbnailRequestForSource:(id)arg1 reportGenericIcons:(BOOL)arg2 ;
-(void)regenerateIconForSource:(id)arg1 ;
-(void)_didGenerateThumbnail:(id)arg1 forSource:(id)arg2 ;
-(id)iconForSource:(id)arg1 ;
-(id)_genericIconForUTI:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_lookupGenericIconForType:(id)arg1 ;
-(void)_generateThumbnailForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

