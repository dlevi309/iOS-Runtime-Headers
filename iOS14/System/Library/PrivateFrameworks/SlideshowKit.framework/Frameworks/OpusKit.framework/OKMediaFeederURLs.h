/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaFeeder.h>

@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder {

	NSArray* _mediaURLs;

}
+(BOOL)isRemote;
+(id)supportedSettings;
+(id)mediaFeederWithMediaObjects:(id)arg1 ;
+(id)mediaFeederWithMediaURLs:(id)arg1 ;
+(BOOL)supportLiveUpdates;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(id)initWithMediaObjects:(id)arg1 ;
-(void)dealloc;
-(id)initWithMediaURLs:(id)arg1 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
@end

