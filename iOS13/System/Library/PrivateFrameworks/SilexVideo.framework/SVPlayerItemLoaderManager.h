/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerItemLoaderProviding.h>

@protocol SVPlayerItemLoaderFactory;
@class SVWeakObjectCache, NSString;

@interface SVPlayerItemLoaderManager : NSObject <SVPlayerItemLoaderProviding> {

	id<SVPlayerItemLoaderFactory> _playerItemLoaderFactory;
	SVWeakObjectCache* _playerItemLoaders;

}

@property (nonatomic,readonly) id<SVPlayerItemLoaderFactory> playerItemLoaderFactory;              //@synthesize playerItemLoaderFactory=_playerItemLoaderFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * playerItemLoaders;                              //@synthesize playerItemLoaders=_playerItemLoaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)playerItemLoaderForVideo:(id)arg1 ;
-(SVWeakObjectCache *)playerItemLoaders;
-(id<SVPlayerItemLoaderFactory>)playerItemLoaderFactory;
-(id)initWithPlayerItemLoaderFactory:(id)arg1 ;
@end

