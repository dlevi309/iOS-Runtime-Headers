/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, NSAttributedString;

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell <UITextViewDelegate> {

	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                          //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)_fontDescriptor;
-(void)layoutSubviews;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(double)rowHeight;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_fontSizeDidChange;
@end

