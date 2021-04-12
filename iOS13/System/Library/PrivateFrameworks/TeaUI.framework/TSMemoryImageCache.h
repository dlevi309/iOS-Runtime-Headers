/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TSMemoryImageCache : NSObject {

	 lruCache;
	 accessor;

}
-(id)init;
-(id)imageForKey:(id)arg1 ;
-(id)initWithMaxSize:(long long)arg1 accessor:(id)arg2 ;
-(void)cacheImage:(id)arg1 forKey:(id)arg2 expires:(BOOL)arg3 ;
@end

