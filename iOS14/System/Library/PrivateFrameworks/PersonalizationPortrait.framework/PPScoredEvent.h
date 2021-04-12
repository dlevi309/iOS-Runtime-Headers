/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface PPScoredEvent : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _title;
	double _score;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double score;                    //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(double)score;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 score:(double)arg4 ;
-(NSString *)title;
@end

