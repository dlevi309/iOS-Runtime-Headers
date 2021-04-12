/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary, NSArray, MPStoreArtworkRequestToken, NSString;

@interface MPStoreItemMovieClip : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;                                      //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) MPStoreArtworkRequestToken * previewArtworkRequestToken; 
@property (nonatomic,copy,readonly) NSString * title; 
-(NSString *)title;
-(NSArray *)assets;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(MPStoreArtworkRequestToken *)previewArtworkRequestToken;
@end

