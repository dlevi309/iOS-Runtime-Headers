/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPScoredEvent.h>

@interface PPSuggestedEvent : PPScoredEvent {

	unsigned char _category;

}

@property (nonatomic,readonly) unsigned char category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)category;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 score:(double)arg2 ;
@end

