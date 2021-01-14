/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSArray;

@interface SFVisibleSuggestionsFeedback : SFFeedback {

	NSArray* _suggestions;

}

@property (nonatomic,copy) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSuggestions:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

