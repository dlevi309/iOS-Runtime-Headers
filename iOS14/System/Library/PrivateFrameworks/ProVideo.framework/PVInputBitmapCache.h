/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject {

	NSMutableDictionary* _cache;
	unsigned long long _countLimit;

}
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)purge:(BOOL)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
@end

