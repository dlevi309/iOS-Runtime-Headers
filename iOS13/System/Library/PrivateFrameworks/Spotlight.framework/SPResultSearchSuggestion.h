/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

#import <SearchFoundation/SFSearchSuggestion.h>

@class SFSearchResult;

@interface SPResultSearchSuggestion : SFSearchSuggestion {

	SFSearchResult* _originalResult;

}

@property (nonatomic,retain) SFSearchResult * originalResult;              //@synthesize originalResult=_originalResult - In the implementation block
-(id)description;
-(Class)classForKeyedArchiver;
-(id)initWithResult:(id)arg1 ;
-(SFSearchResult *)originalResult;
-(void)setOriginalResult:(SFSearchResult *)arg1 ;
@end

