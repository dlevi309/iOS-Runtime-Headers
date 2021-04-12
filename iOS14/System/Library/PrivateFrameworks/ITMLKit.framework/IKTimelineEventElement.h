/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)offset;
-(IKViewElement *)relatedContent;
-(double)duration;
@end

