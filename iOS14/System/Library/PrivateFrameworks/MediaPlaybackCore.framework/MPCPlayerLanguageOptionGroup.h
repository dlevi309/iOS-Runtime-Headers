/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSArray, MPCPlayerResponse, NSString, MPNowPlayingInfoLanguageOption;

@interface MPCPlayerLanguageOptionGroup : NSObject {

	unsigned long long _currentIndex;
	BOOL _allowEmptySelection;
	NSArray* _options;
	MPCPlayerResponse* _response;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long numberOfOptions; 
@property (nonatomic,readonly) unsigned long long indexOfSelectedOption; 
@property (nonatomic,readonly) NSArray * options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * selectedOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection;                                     //@synthesize allowEmptySelection=_allowEmptySelection - In the implementation block
-(NSString *)localizedTitle;
-(BOOL)allowEmptySelection;
-(NSArray *)options;
-(MPCPlayerResponse *)response;
-(id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3 ;
-(unsigned long long)numberOfOptions;
-(unsigned long long)indexOfSelectedOption;
-(MPNowPlayingInfoLanguageOption *)selectedOption;
-(id)localizedTitleForOptionAtIndex:(unsigned long long)arg1 ;
-(id)changeRequestForOptionAtIndex:(unsigned long long)arg1 ;
@end

