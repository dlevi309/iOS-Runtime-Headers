/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray, NSURL;

@interface IKTimelineElement : IKViewElement

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) NSArray * events; 
@property (nonatomic,readonly) unsigned long long timelineType; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) double refreshInterval; 
-(NSURL *)url;
-(double)refreshInterval;
-(NSArray *)events;
-(IKTextElement *)title;
-(unsigned long long)timelineType;
@end

