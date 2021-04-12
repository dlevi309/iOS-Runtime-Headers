/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject {

	NSMutableDictionary* _cache;
	unsigned long long _countLimit;

}
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)purge:(BOOL)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
@end

