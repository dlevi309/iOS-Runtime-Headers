/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem {

	NSURL* _url;
	NSSet* _traits;

}

@property (nonatomic,copy) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSSet * traits;              //@synthesize traits=_traits - In the implementation block
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSSet *)traits;
-(void)setTraits:(NSSet *)arg1 ;
-(id)mediaItemURL;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(BOOL)hasTrait:(id)arg1 ;
@end

