/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)playlistName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)persistentIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntireMusicLibrary;
-(id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2 ;
-(BOOL)entireMusicLibrary;
@end

