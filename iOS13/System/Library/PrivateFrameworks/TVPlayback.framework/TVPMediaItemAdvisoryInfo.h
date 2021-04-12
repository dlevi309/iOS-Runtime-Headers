/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject {

	NSString* _ratingName;
	NSString* _ratingDescription;

}

@property (nonatomic,retain) NSString * ratingName;                       //@synthesize ratingName=_ratingName - In the implementation block
@property (nonatomic,readonly) NSString * ratingDescription;              //@synthesize ratingDescription=_ratingDescription - In the implementation block
-(id)description;
-(NSString *)ratingDescription;
-(NSString *)ratingName;
-(id)initWithRatingDescription:(id)arg1 ;
-(void)setRatingName:(NSString *)arg1 ;
@end

