/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

@class NSString, NSAttributedString;


@protocol PRXTextContainer <NSObject>
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) long long style; 
@required
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(id)arg1;
-(void)setText:(id)arg1;
-(NSString *)text;
-(long long)style;

@end

