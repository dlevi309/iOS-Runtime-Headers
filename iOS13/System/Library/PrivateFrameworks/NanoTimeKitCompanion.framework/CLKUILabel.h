/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class UIFont, UIColor, NSString, NSAttributedString;


@protocol CLKUILabel <NSObject>
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@required
-(NSString *)text;
-(void)setText:(id)arg1;
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setTextAlignment:(long long)arg1;
-(UIFont *)font;
-(void)setAttributedText:(id)arg1;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(long long)textAlignment;
-(UIEdgeInsets)opticalInsets;

@end

