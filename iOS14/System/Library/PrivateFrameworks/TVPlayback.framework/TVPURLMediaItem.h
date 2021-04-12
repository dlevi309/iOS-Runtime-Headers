/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)traits;
-(id)init;
-(void)setTraits:(NSSet *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
@end

