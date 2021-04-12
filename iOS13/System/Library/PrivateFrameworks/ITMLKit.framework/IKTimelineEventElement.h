/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSDate, IKViewElement;

@interface IKTimelineEventElement : IKViewElement

@property (nonatomic,readonly) double offset; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(NSDate *)startDate;
-(double)duration;
-(double)offset;
-(IKViewElement *)relatedContent;
@end

