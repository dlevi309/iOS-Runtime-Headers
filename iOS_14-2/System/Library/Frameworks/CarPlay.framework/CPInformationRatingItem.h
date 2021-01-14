/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPInformationItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CPInformationRatingItem : CPInformationItem <NSSecureCoding> {

	NSNumber* _rating;
	NSNumber* _maximumRating;

}

@property (nonatomic,readonly) NSNumber * rating;                     //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumRating;              //@synthesize maximumRating=_maximumRating - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)rating;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)maximumRating;
-(id)initWithTitle:(id)arg1 detail:(id)arg2 ;
-(void)_santizeRatingItem;
-(id)initWithRating:(id)arg1 maximumRating:(id)arg2 title:(id)arg3 detail:(id)arg4 ;
@end

