/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSArray, MPCPlayerResponse, NSString;

@interface MPCPlayerLanguageOptionGroup : NSObject {

	BOOL _allowEmptySelection;
	unsigned long long _currentIndex;
	NSArray* _options;
	MPCPlayerResponse* _response;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long numberOfOptions; 
@property (nonatomic,readonly) unsigned long long indexOfSelectedOption; 
@property (nonatomic,readonly) NSArray * options;                                     //@synthesize options=_options - In the implementation block
-(NSArray *)options;
-(MPCPlayerResponse *)response;
-(NSString *)localizedTitle;
-(id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3 ;
-(unsigned long long)numberOfOptions;
-(unsigned long long)indexOfSelectedOption;
-(id)localizedTitleForOptionAtIndex:(unsigned long long)arg1 ;
-(id)changeRequestForOptionAtIndex:(unsigned long long)arg1 ;
@end

