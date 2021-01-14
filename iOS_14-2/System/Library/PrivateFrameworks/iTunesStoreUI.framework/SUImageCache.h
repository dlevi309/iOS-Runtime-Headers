/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class CPLRUDictionary;

@interface SUImageCache : NSObject {

	CPLRUDictionary* _dictionary;

}
-(id)init;
-(id)initWithMaximumCapacity:(long long)arg1 ;
-(void)dealloc;
-(void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3 ;
-(id)imageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)removeAllCachedImages;
@end

