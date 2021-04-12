/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaFeeder.h>

@class NSURL, NSArray;

@interface OKMediaFeederFileSystem : OKMediaFeeder {

	NSURL* _directoryURL;
	NSArray* _mediaURLs;

}

@property (retain) NSArray * mediaURLs;              //@synthesize mediaURLs=_mediaURLs - In the implementation block
+(BOOL)isRemote;
+(id)supportedSettings;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithDirectoryURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(NSArray *)mediaURLs;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(void)setMediaURLs:(NSArray *)arg1 ;
@end

