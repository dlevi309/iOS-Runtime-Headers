/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, IKImageElement;

@interface IKHeaderElement : IKViewElement

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKImageElement * image; 
@property (nonatomic,readonly) long long separator; 
-(IKTextElement *)title;
-(IKImageElement *)image;
-(IKTextElement *)subtitle;
-(long long)separator;
-(IKTextElement *)descriptionText;
@end

