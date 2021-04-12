/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray;

@interface IKDialogTemplate : IKViewElement

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) NSArray * buttons; 
-(unsigned long long)type;
-(IKTextElement *)title;
-(IKTextElement *)descriptionText;
-(NSArray *)buttons;
@end

