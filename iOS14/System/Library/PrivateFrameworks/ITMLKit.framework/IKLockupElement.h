/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKTextElement, IKOrdinalElement, IKViewElement;

@interface IKLockupElement : IKViewElement

@property (nonatomic,retain,readonly) IKImageElement * image; 
@property (nonatomic,retain,readonly) IKImageElement * fullscreenImage; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) BOOL showTitlesOnFocus; 
@property (nonatomic,retain,readonly) IKViewElement * overlays; 
-(IKOrdinalElement *)ordinal;
-(IKTextElement *)descriptionText;
-(IKViewElement *)overlays;
-(IKTextElement *)subtitle;
-(IKImageElement *)image;
-(IKTextElement *)title;
-(IKImageElement *)fullscreenImage;
-(BOOL)showTitlesOnFocus;
@end

