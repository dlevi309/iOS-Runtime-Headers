/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, NSArray, ICStoreArtworkInfo;

@interface MPExportableArtworkProperties : NSObject {

	NSString* _resolvedURLString;
	NSArray* _artworkTemplateItems;
	unsigned long long _mediaType;
	long long _mediaLibraryArtworkType;

}

@property (nonatomic,readonly) ICStoreArtworkInfo * artworkInfo; 
@property (nonatomic,copy) NSString * resolvedURLString;                      //@synthesize resolvedURLString=_resolvedURLString - In the implementation block
@property (nonatomic,copy) NSArray * artworkTemplateItems;                    //@synthesize artworkTemplateItems=_artworkTemplateItems - In the implementation block
@property (assign,nonatomic) unsigned long long mediaType;                    //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long mediaLibraryArtworkType;               //@synthesize mediaLibraryArtworkType=_mediaLibraryArtworkType - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(unsigned long long)mediaType;
-(void)setMediaType:(unsigned long long)arg1 ;
-(ICStoreArtworkInfo *)artworkInfo;
-(NSString *)resolvedURLString;
-(void)setResolvedURLString:(NSString *)arg1 ;
-(NSArray *)artworkTemplateItems;
-(void)setArtworkTemplateItems:(NSArray *)arg1 ;
-(long long)mediaLibraryArtworkType;
-(void)setMediaLibraryArtworkType:(long long)arg1 ;
@end

