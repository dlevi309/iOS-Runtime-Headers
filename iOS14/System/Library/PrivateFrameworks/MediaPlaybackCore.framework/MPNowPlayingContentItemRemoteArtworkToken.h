/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)artworkIdentifier;
-(id)stringRepresentation;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(MPExportableArtworkProperties *)artworkProperties;
-(id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3 ;
@end

