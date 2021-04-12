/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextDraggableGeometrySameViewDropOperation.h>

@class NSArray, UITextRange, NSAttributedString, NSString;

@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation> {

	NSArray* _sourceRanges;
	UITextRange* _targetRange;
	NSAttributedString* _text;
	unsigned long long _operation;

}

@property (nonatomic,retain) NSArray * sourceRanges;                    //@synthesize sourceRanges=_sourceRanges - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                 //@synthesize targetRange=_targetRange - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long operation;              //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperation:(unsigned long long)arg1 ;
-(unsigned long long)operation;
-(void)setText:(NSAttributedString *)arg1 ;
-(NSArray *)sourceRanges;
-(UITextRange *)targetRange;
-(void)setSourceRanges:(NSArray *)arg1 ;
-(NSAttributedString *)text;
-(void)setTargetRange:(UITextRange *)arg1 ;
@end

