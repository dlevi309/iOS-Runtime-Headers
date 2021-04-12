/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(double)duration;
-(NSString *)bundleID;
-(double)elapsedTime;
-(BOOL)isPlayed;
-(NSDate *)occurrenceDate;
-(NSString *)channelID;
-(NSString *)showID;
-(NSString *)externalPlayableID;
@end

