/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPScoredEvent.h>

@class NSArray;

@interface PPTripEvent : PPScoredEvent {

	NSArray* _tripParts;

}

@property (nonatomic,readonly) NSArray * tripParts;              //@synthesize tripParts=_tripParts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)destinations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)tripParts;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 tripParts:(id)arg3 ;
-(id)destinationsBasedTitle;
@end

