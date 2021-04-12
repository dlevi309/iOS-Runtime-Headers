/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, NSArray, IKTextElement, IKProgressIndicatorElement, IKActivityIndicatorElement, IKCheckMarkElement, IKOrdinalElement, IKViewElement;

@interface IKListItemLockupElement : IKViewElement

@property (nonatomic,readonly) NSString * itemHeight; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) NSArray * decorationImages; 
@property (nonatomic,retain,readonly) IKTextElement * decorationLabel; 
@property (nonatomic,retain,readonly) IKProgressIndicatorElement * progressIndicator; 
@property (nonatomic,retain,readonly) IKActivityIndicatorElement * activityIndicator; 
@property (nonatomic,retain,readonly) IKCheckMarkElement * checkMark; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(IKTextElement *)title;
-(NSArray *)images;
-(IKTextElement *)subtitle;
-(IKActivityIndicatorElement *)activityIndicator;
-(IKOrdinalElement *)ordinal;
-(IKViewElement *)relatedContent;
-(NSString *)itemHeight;
-(NSArray *)decorationImages;
-(IKTextElement *)decorationLabel;
-(IKProgressIndicatorElement *)progressIndicator;
-(IKCheckMarkElement *)checkMark;
@end

