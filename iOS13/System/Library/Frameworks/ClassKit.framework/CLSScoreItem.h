/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(double)score;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4 ;
@end

