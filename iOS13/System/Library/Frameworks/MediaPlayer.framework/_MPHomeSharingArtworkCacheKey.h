/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPHomeSharingArtworkCacheKey : NSObject {

	unsigned long long _persistentID;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(unsigned long long)persistentID;
-(id)initWithPersistentID:(unsigned long long)arg1 size:(CGSize)arg2 ;
@end

