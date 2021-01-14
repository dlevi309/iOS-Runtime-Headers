/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)assets;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(MPStoreArtworkRequestToken *)previewArtworkRequestToken;
-(NSString *)title;
@end

