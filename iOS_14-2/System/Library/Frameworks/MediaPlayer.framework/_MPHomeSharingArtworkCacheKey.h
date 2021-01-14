/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPHomeSharingArtworkCacheKey : NSObject {

	unsigned long long _persistentID;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)initWithPersistentID:(unsigned long long)arg1 size:(CGSize)arg2 ;
-(unsigned long long)persistentID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

