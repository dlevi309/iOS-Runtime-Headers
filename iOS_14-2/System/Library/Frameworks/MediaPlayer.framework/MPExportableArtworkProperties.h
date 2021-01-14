/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMediaType:(unsigned long long)arg1 ;
-(unsigned long long)mediaType;
-(ICStoreArtworkInfo *)artworkInfo;
-(NSString *)resolvedURLString;
-(void)setResolvedURLString:(NSString *)arg1 ;
-(NSArray *)artworkTemplateItems;
-(void)setArtworkTemplateItems:(NSArray *)arg1 ;
-(long long)mediaLibraryArtworkType;
-(void)setMediaLibraryArtworkType:(long long)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

