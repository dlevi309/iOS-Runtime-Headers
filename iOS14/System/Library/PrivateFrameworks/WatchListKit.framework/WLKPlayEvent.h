/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSDate;

@interface WLKPlayEvent : NSObject {

	BOOL _played;
	NSString* _bundleID;
	NSString* _channelID;
	NSString* _externalPlayableID;
	NSString* _showID;
	double _elapsedTime;
	double _duration;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalPlayableID;              //@synthesize externalPlayableID=_externalPlayableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * showID;                          //@synthesize showID=_showID - In the implementation block
@property (getter=isPlayed,nonatomic,readonly) BOOL played;                     //@synthesize played=_played - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                    //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
-(id)init;
-(BOOL)isPlayed;
-(NSString *)showID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)channelID;
-(double)elapsedTime;
-(id)description;
-(NSString *)bundleID;
-(NSDate *)occurrenceDate;
-(double)duration;
-(NSString *)externalPlayableID;
@end

