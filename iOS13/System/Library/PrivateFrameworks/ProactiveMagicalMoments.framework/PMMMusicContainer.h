/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PMMMusicContainer : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _trackIdentifier;
	NSDate* _playTime;
	NSDate* _pauseTime;

}

@property (nonatomic,readonly) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * trackIdentifier;              //@synthesize trackIdentifier=_trackIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * playTime;                       //@synthesize playTime=_playTime - In the implementation block
@property (nonatomic,readonly) NSDate * pauseTime;                      //@synthesize pauseTime=_pauseTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleId;
-(NSDate *)pauseTime;
-(void)setPlayingWithBundleId:(id)arg1 trackIdentifier:(id)arg2 playTime:(id)arg3 ;
-(void)setPauseIfUnset;
-(NSString *)trackIdentifier;
-(NSDate *)playTime;
@end

