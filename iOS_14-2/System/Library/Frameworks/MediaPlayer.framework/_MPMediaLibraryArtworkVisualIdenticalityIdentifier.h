/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)stringRepresentation;
-(long long)artworkType;
-(id)init;
-(id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

