/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString, MPExportableArtworkProperties;

@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality> {

	NSString* _identifier;
	NSString* _artworkIdentifier;
	MPExportableArtworkProperties* _artworkProperties;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * artworkIdentifier;                                   //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MPExportableArtworkProperties * artworkProperties;              //@synthesize artworkProperties=_artworkProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)stringRepresentation;
-(NSString *)artworkIdentifier;
-(MPExportableArtworkProperties *)artworkProperties;
-(id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3 ;
@end

