/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject {

	NSDictionary* _dictionary;
	WLKPlayable* _playable;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                      //@synthesize playable=_playable - In the implementation block
-(id)init;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(WLKPlayable *)playable;
@end

