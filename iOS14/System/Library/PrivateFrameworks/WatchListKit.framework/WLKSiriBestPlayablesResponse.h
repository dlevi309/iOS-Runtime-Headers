/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSDictionary *)playablesByID;
-(id)playableForStatsID:(id)arg1 ;
-(void)setPlayablesByID:(NSDictionary *)arg1 ;
@end

