/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSScoreItem : CLSActivityItem {

	double _score;
	double _maxScore;

}

@property (assign,nonatomic) double score; 
@property (assign,nonatomic) double maxScore; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(double)score;
-(double)maxScore;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setMaxScore:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4 ;
@end

