/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface MPTiledArtworkRepresentationCacheKey : NSObject <MPArtworkDataSourceVisualIdenticality> {

	id _entityIdentifier;
	id _namespaceIdentifier;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	id _revisionIdentifier;
	CGSize _scaledFittingSize;
	double _tileSpacing;

}

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
-(id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
@end

