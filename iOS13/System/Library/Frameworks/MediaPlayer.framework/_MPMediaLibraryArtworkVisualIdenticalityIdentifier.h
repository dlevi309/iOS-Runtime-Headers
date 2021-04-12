/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {

	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;

}

@property (nonatomic,readonly) long long artworkType;                         //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken;              //@synthesize availableArtworkToken=_availableArtworkToken - In the implementation block
@property (nonatomic,readonly) NSString * fetchableArtworkToken;              //@synthesize fetchableArtworkToken=_fetchableArtworkToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
-(long long)artworkType;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3 ;
@end

