/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IKActivityIndicatorElement *)activityIndicator;
-(IKOrdinalElement *)ordinal;
-(IKTextElement *)subtitle;
-(IKViewElement *)relatedContent;
-(NSArray *)images;
-(IKProgressIndicatorElement *)progressIndicator;
-(IKTextElement *)title;
-(IKTextElement *)decorationLabel;
-(NSArray *)decorationImages;
-(IKCheckMarkElement *)checkMark;
-(NSString *)itemHeight;
@end

