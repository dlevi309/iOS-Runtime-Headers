/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject {

	void* _mrLanguageOptionGroup;

}

@property (nonatomic,readonly) void* mrLanguageOptionGroup;                                         //@synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptions; 
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * defaultLanguageOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection; 
-(void)dealloc;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(BOOL)arg3 ;
-(id)initWithMRLanguageOptionGroup:(void*)arg1 ;
-(NSArray *)languageOptions;
-(MPNowPlayingInfoLanguageOption *)defaultLanguageOption;
-(BOOL)allowEmptySelection;
-(void*)mrLanguageOptionGroup;
@end

