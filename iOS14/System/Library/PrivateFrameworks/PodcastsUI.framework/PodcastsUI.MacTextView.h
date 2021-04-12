/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class NSString, UIBezierPath;

@interface PodcastsUI.MacTextView : UITextView

@property (copy,nonatomic) NSString * text; 
@property (retain,nonatomic) UIBezierPath * accessibilityPath; 
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIBezierPath *)accessibilityPath;
@end

