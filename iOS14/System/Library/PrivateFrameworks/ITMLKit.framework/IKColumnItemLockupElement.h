/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, IKTextElement, IKOrdinalElement, IKImageElement, NSArray, IKTextBadgeAttachment, IKButtonElement, IKVideoElement;

@interface IKColumnItemLockupElement : IKViewElement

@property (nonatomic,copy,readonly) NSString * columnItemType; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * secondarySubtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) IKImageElement * image; 
@property (nonatomic,readonly) NSArray * images; 
@property (nonatomic,readonly) IKTextBadgeAttachment * titleBadge; 
@property (nonatomic,readonly) IKTextBadgeAttachment * subtitleBadge; 
@property (nonatomic,retain,readonly) IKButtonElement * button; 
@property (nonatomic,retain,readonly) IKVideoElement * video; 
@property (nonatomic,retain,readonly) NSArray * textElements; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,readonly) BOOL isWatchlisted; 
@property (nonatomic,readonly) BOOL onlyVisibleOnColumnHighlight; 
-(BOOL)hasSeparator;
-(IKButtonElement *)button;
-(IKOrdinalElement *)ordinal;
-(IKTextElement *)descriptionText;
-(IKVideoElement *)video;
-(IKTextElement *)subtitle;
-(IKImageElement *)image;
-(IKTextElement *)secondarySubtitle;
-(NSArray *)images;
-(IKTextElement *)title;
-(NSString *)columnItemType;
-(void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4 ;
-(IKTextBadgeAttachment *)titleBadge;
-(IKTextBadgeAttachment *)subtitleBadge;
-(NSArray *)textElements;
-(BOOL)isWatchlisted;
-(BOOL)onlyVisibleOnColumnHighlight;
@end

