/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKMovieClipAsset : NSObject {

	unsigned long long _duration;
	NSString* _flavor;
	NSString* _url;

}

@property (nonatomic,readonly) unsigned long long duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationString; 
@property (nonatomic,copy,readonly) NSString * flavor;                      //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                         //@synthesize url=_url - In the implementation block
+(id)movieClipAssetsWithArray:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)_init;
-(NSString *)url;
-(unsigned long long)duration;
-(NSString *)durationString;
-(NSString *)flavor;
@end

