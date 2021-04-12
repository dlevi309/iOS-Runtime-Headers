/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(UITextRange *)targetRange;
-(NSArray *)sourceRanges;
-(void)setSourceRanges:(NSArray *)arg1 ;
@end

