/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject {

	NSString* _ratingName;
	NSString* _ratingDescription;

}

@property (nonatomic,retain) NSString * ratingName;                       //@synthesize ratingName=_ratingName - In the implementation block
@property (nonatomic,readonly) NSString * ratingDescription;              //@synthesize ratingDescription=_ratingDescription - In the implementation block
-(NSString *)ratingDescription;
-(id)description;
-(NSString *)ratingName;
-(id)initWithRatingDescription:(id)arg1 ;
-(void)setRatingName:(NSString *)arg1 ;
@end

