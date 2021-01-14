/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SearchFoundation/SFSearchSuggestion.h>

@class SFSearchResult;

@interface SPResultSuggestion : SFSearchSuggestion {

	SFSearchResult* _originalResult;

}

@property (nonatomic,retain) SFSearchResult * originalResult;              //@synthesize originalResult=_originalResult - In the implementation block
-(Class)classForKeyedArchiver;
-(id)initWithResult:(id)arg1 ;
-(id)description;
-(SFSearchResult *)originalResult;
-(void)setOriginalResult:(SFSearchResult *)arg1 ;
@end

