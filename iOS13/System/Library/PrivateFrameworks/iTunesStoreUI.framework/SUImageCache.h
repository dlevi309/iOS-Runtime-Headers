/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class CPLRUDictionary;

@interface SUImageCache : NSObject {

	CPLRUDictionary* _dictionary;

}
-(id)init;
-(void)dealloc;
-(id)initWithMaximumCapacity:(long long)arg1 ;
-(void)removeAllCachedImages;
-(void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3 ;
-(id)imageForURL:(id)arg1 dataProvider:(id)arg2 ;
@end

