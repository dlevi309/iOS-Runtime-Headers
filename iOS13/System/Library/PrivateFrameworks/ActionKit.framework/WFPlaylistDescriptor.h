/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding> {

	BOOL _entireMusicLibrary;
	NSString* _playlistName;
	NSNumber* _persistentIdentifier;

}

@property (nonatomic,readonly) BOOL entireMusicLibrary;                      //@synthesize entireMusicLibrary=_entireMusicLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistName;                 //@synthesize playlistName=_playlistName - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)persistentIdentifier;
-(NSString *)playlistName;
-(id)initWithEntireMusicLibrary;
-(id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2 ;
-(BOOL)entireMusicLibrary;
@end

