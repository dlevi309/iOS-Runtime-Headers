/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject {

	NSDictionary* _dictionary;
	NSDictionary* _playablesByID;

}

@property (nonatomic,copy) NSDictionary * playablesByID;                    //@synthesize playablesByID=_playablesByID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)init;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)playablesByID;
-(id)playableForStatsID:(id)arg1 ;
-(void)setPlayablesByID:(NSDictionary *)arg1 ;
@end

