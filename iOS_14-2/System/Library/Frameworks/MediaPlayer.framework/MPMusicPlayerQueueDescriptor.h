/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {

	long long _shuffleType;
	long long _repeatType;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	NSDictionary* _startTimes;
	NSDictionary* _endTimes;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic) long long shuffleType;                                //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) long long repeatType;                                 //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * startTimes;                          //@synthesize startTimes=_startTimes - In the implementation block
@property (nonatomic,readonly) NSDictionary * endTimes;                            //@synthesize endTimes=_endTimes - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)shuffleType;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)startTimes;
-(NSDictionary *)endTimes;
-(long long)repeatType;
-(void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2 ;
-(void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2 ;
-(void)setShuffleType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isEmpty;
-(void)setRepeatType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

