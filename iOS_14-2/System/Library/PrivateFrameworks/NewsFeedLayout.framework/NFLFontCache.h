/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject {

	FCThreadSafeMutableDictionary* _fontCache;

}

@property (nonatomic,retain) FCThreadSafeMutableDictionary * fontCache;              //@synthesize fontCache=_fontCache - In the implementation block
-(id)init;
-(id)fontWithName:(id)arg1 size:(double)arg2 ;
-(FCThreadSafeMutableDictionary *)fontCache;
-(void)clearCache;
-(void)setFontCache:(FCThreadSafeMutableDictionary *)arg1 ;
@end

