/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(void)setAttributedText:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setText:(id)arg1;
-(long long)textAlignment;
-(void)setTextColor:(id)arg1;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1;
-(double)_lastLineBaseline;
-(UIFont *)font;
-(UIEdgeInsets)opticalInsets;

@end

