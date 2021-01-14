/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPauseIfUnset;
-(id)description;
-(NSDate *)playTime;
-(NSString *)trackIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayingWithBundleId:(id)arg1 trackIdentifier:(id)arg2 playTime:(id)arg3 ;
-(NSDate *)pauseTime;
@end

