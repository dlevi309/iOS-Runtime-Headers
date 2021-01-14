/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextView *)textView;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)init;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)_fontDescriptor;
-(void)layoutSubviews;
-(double)rowHeight;
-(NSString *)text;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_fontSizeDidChange;
@end

