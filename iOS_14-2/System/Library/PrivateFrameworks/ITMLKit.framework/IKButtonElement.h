/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSString, IKImageElement;

@interface IKButtonElement : IKViewElement

@property (nonatomic,readonly) long long buttonType; 
@property (nonatomic,retain,readonly) IKTextElement * text; 
@property (nonatomic,copy,readonly) NSString * confirmationText; 
@property (nonatomic,retain,readonly) IKImageElement * image; 
-(IKImageElement *)image;
-(IKTextElement *)text;
-(long long)buttonType;
-(NSString *)confirmationText;
@end

