/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKContinuationMetadataBase.h>

@class NSURL, NSString;

@interface WLKDeltaContinuationMetadata : WLKContinuationMetadataBase {

	long long _deltaType;
	NSURL* _playbackURL;
	NSString* _adamID;

}

@property (nonatomic,readonly) long long deltaType;              //@synthesize deltaType=_deltaType - In the implementation block
@property (nonatomic,readonly) NSURL * playbackURL;              //@synthesize playbackURL=_playbackURL - In the implementation block
@property (nonatomic,readonly) NSString * adamID;                //@synthesize adamID=_adamID - In the implementation block
+(long long)_deltaTypeForString:(id)arg1 ;
-(NSString *)adamID;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)playbackURL;
-(long long)deltaType;
@end

