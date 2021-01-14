/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)durationString;
-(id)_init;
-(NSString *)flavor;
-(unsigned long long)duration;
@end

