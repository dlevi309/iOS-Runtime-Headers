/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback {

	SFSearchSuggestion* _suggestion;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
@end

