/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SBCPlaybackPositionDomain;

@interface SBCClientConfiguration : NSObject <NSSecureCoding> {

	SBCPlaybackPositionDomain* _playbackPositionDomain;

}

@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlaybackPositionDomain:(id)arg1 ;
@end

