/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/


@class NSString;

@interface SQGenre : NSObject {

	float _score;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float score;                 //@synthesize score=_score - In the implementation block
+(id)genreWithLabel:(id)arg1 score:(float)arg2 ;
-(float)score;
-(void)setScore:(float)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

