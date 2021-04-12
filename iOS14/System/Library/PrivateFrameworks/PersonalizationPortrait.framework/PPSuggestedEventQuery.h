/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPEventQuery.h>

@class NSSet;

@interface PPSuggestedEventQuery : PPEventQuery {

	NSSet* _matchingCategories;

}

@property (nonatomic,retain) NSSet * matchingCategories;              //@synthesize matchingCategories=_matchingCategories - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMatchingCategories:(NSSet *)arg1 ;
-(NSSet *)matchingCategories;
-(id)initWithCoder:(id)arg1 ;
@end

