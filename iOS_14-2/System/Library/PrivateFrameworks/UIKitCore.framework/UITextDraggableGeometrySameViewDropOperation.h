/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, UITextRange, NSAttributedString;


@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property (nonatomic,readonly) NSArray * sourceRanges; 
@property (nonatomic,readonly) UITextRange * targetRange; 
@property (nonatomic,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) unsigned long long operation; 
@required
-(unsigned long long)operation;
-(NSArray *)sourceRanges;
-(UITextRange *)targetRange;
-(NSAttributedString *)text;

@end

