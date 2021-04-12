/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSArray;

@interface SFVisibleSuggestionsFeedback : SFFeedback {

	NSArray* _suggestions;

}

@property (nonatomic,copy) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id)initWithSuggestions:(id)arg1 ;
@end

