/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSArray;

@interface AMSRatingSystem : NSObject {

	NSString* _kind;
	NSString* _label;
	NSArray* _contentRatings;
	NSString* _ratingSystemID;

}

@property (nonatomic,readonly) NSString * kind;                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSArray * contentRatings;               //@synthesize contentRatings=_contentRatings - In the implementation block
@property (nonatomic,readonly) NSString * ratingSystemID;              //@synthesize ratingSystemID=_ratingSystemID - In the implementation block
+(id)ratingSystemWithDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)kind;
-(id)description;
-(NSString *)ratingSystemID;
-(NSArray *)contentRatings;
-(NSString *)label;
@end

