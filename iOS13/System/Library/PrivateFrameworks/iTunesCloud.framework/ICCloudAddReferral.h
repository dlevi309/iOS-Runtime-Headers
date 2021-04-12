/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding> {

	NSString* _playlistGlobalID;
	long long _albumAdamID;

}

@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long albumAdamID;                         //@synthesize albumAdamID=_albumAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referralWithAlbumAdamID:(long long)arg1 ;
+(id)referralWithPlaylistGlobalID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)playlistGlobalID;
-(long long)albumAdamID;
@end

