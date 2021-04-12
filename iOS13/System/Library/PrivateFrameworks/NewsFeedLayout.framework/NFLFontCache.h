/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject {

	FCThreadSafeMutableDictionary* _fontCache;

}

@property (nonatomic,retain) FCThreadSafeMutableDictionary * fontCache;              //@synthesize fontCache=_fontCache - In the implementation block
-(id)init;
-(void)clearCache;
-(id)fontWithName:(id)arg1 size:(double)arg2 ;
-(FCThreadSafeMutableDictionary *)fontCache;
-(void)setFontCache:(FCThreadSafeMutableDictionary *)arg1 ;
@end

